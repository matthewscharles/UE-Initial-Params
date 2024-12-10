// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoundInitParamsBPLibrary.h"
#include "SoundInitParams.h"

USoundInitParamsBPLibrary::USoundInitParamsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float USoundInitParamsBPLibrary::SoundInitParamsSampleFunction(float Param)
{
	return -1;
}

