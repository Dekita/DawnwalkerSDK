#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NodeBase.h"
#include "CoreNode_PrintString.generated.h"

UCLASS(Blueprintable)
class UCoreNode_PrintString : public UNodeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MessageStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
public:
    UCoreNode_PrintString();

};

