// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "DetailLayoutBuilder.h"
#include "IDetailCustomization.h"
#include "PropertyHandle.h"

#include "MovieGraphImageSequenceOutputNode.h"
#include "MovieRenderPipelineCoreModule.h"

/* Customizes how the multi-layer EXR node's properties appear in the details panel. */
class FMovieGraphMultiLayerEXRNodeCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance()
	{
		return MakeShared<FMovieGraphMultiLayerEXRNodeCustomization>();
	}

protected:
	//~ Begin IDetailCustomization interface
	virtual void CustomizeDetails(const TSharedPtr<IDetailLayoutBuilder>& DetailBuilder) override
	{
		CustomizeDetails(*DetailBuilder);
	}
	
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override
	{
		// These properties are only relevant to single-layer EXRs, not multi-layer.
		const TSharedRef<IPropertyHandle> CompositeOntoFinalImageProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UMovieGraphImageSequenceOutputNode_EXR, bCompositeOntoFinalImage));
		const TSharedRef<IPropertyHandle> BurnInFileNameFormatProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UMovieGraphImageSequenceOutputNode_EXR, BurnInFileNameFormat));

		// The multi-layer EXR node inherits from the normal EXR node; this customization should only be applied to multi-layer.
		const TArray<TWeakObjectPtr<UMovieGraphImageSequenceOutputNode_MultiLayerEXR>> MultiLayerExrNodes =
			DetailBuilder.GetObjectsOfTypeBeingCustomized<UMovieGraphImageSequenceOutputNode_MultiLayerEXR>();
		if (MultiLayerExrNodes.IsEmpty())
		{
			return;
		}

		DetailBuilder.HideProperty(CompositeOntoFinalImageProperty);
		DetailBuilder.HideProperty(BurnInFileNameFormatProperty);
	}
	//~ End IDetailCustomization interface
};