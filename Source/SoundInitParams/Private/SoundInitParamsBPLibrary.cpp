// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoundInitParamsBPLibrary.h"
#include "SoundInitParams.h"

USoundInitParamsBPLibrary::USoundInitParamsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

bool USoundInitParamsBPLibrary::TestFunction() {
	float test = 0.1f;
	return true;
}

FAudioParameter USoundInitParamsBPLibrary::SoundInitParamsSampleFunction(int32 Param)
{
	const FAudioParameter AudioParameter(FName("Surface"), static_cast<int32>(Param));
}

