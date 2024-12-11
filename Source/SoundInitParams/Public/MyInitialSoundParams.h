#pragma once

#include "CoreMinimal.h"
#include "MyInitialActiveSoundParams.generated.h"

UCLASS(BlueprintType, Blueprintable)
class YOURPLUGIN_API UMyInitialActiveSoundParams : public UInitialActiveSoundParams
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category="Audio")
    void SetAudioParams(const TArray<FAudioParameter>& NewParams)
    {
        AudioParams = NewParams;
    }
};