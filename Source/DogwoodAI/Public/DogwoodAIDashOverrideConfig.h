#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DashConfig.h"
#include "DogwoodAIDashOverrideConfig.generated.h"

UCLASS(Blueprintable)
class DOGWOODAI_API UDogwoodAIDashOverrideConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomizeDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashConfig DashCustomConfig;
    
    UDogwoodAIDashOverrideConfig();

};

