#pragma once
#include "CoreMinimal.h"
#include "SwitchParams.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct REBELAI_API FSwitchParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SwitchValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FSwitchParams();
};

