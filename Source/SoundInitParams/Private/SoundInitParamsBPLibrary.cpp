#include "SoundInitParamsBPLibrary.h"
#include "SoundInitParams.h"

UCurrentInitialActiveSoundParams* USoundInitParamsBPLibrary::CreateInitialActiveSoundParams(UObject* WorldContextObject, const TArray<FAudioParameter>& Params)
{
    if (!WorldContextObject)
    {
        return nullptr;
    }

    UWorld* World = WorldContextObject->GetWorld();
    if (!World)
    {
        return nullptr;
    }

    UMyInitialActiveSoundParams* NewParams = NewObject<UMyInitialActiveSoundParams>(World);
    if (NewParams)
    {
        NewParams->SetAudioParams(Params);
    }

    return NewParams;
}
