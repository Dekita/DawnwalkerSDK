#pragma once
#include "CoreMinimal.h"
#include "InputMaterialSettings.generated.h"

USTRUCT(BlueprintType)
struct SIMPLYGONUOBJECTS_API FInputMaterialSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialMapping;
    
    FInputMaterialSettings();
};

