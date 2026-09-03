#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JaliRuntimeAnimSettings.h"
#include "JaliRuntime.generated.h"

class USoundWave;

UCLASS(Blueprintable)
class JALI_API UJaliRuntime : public UObject {
    GENERATED_BODY()
public:
    UJaliRuntime();

    UFUNCTION(BlueprintCallable)
    static USoundWave* LoadWavFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static USoundWave* LoadRuntimeAnimSettings(FJaliRuntimeAnimSettings AnimSettings);
    
    UFUNCTION(BlueprintCallable)
    static FString ComputeAnimSettingsHash(FJaliRuntimeAnimSettings AnimSettings);
    
};

