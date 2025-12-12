// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreTypes.h"
#include "Misc/Guid.h"

#define UE_API MOVIERENDERPIPELINECORE_API

/** Custom serialization version for changes made to Movie Render Pipeline Core objects. */
struct FMovieRenderPipelineCoreObjectVersion
{
	enum Type : int32
	{
		PreVersioning = 0,

		/** Added bOnlyMatchComponents to some conditions within graph collections, defaulting to true. */
		OnlyMatchComponentsAdded,

		// --- Add new versions above this line ---
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1
	};

	static UE_API const FGuid GUID;

	FMovieRenderPipelineCoreObjectVersion() = delete;
};

#undef UE_API
