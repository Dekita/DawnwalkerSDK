#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "BiomesRuntimeProjectSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class ERRANTBIOMESRUNTIME_API UBiomesRuntimeProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditorOnlyBiomeMasks;
    
    UBiomesRuntimeProjectSettings();

};

