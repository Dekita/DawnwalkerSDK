#pragma once
#include "CoreMinimal.h"
#include "SwitchParams.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct FSwitchParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    REBELAI_API FSwitchParams();
};

