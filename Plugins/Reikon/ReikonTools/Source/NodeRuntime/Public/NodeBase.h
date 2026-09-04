#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NodePin.h"
#include "NodeBase.generated.h"

UCLASS(Abstract, Blueprintable)
class NODERUNTIME_API UNodeBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNodePin> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNodePin> Outputs;
    
public:
    UNodeBase();

};

