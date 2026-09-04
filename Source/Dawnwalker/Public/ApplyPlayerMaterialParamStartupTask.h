#pragma once
#include "CoreMinimal.h"
#include "OptionalDialogueStartupTaskBase.h"
#include "ECharacterMaterialParamType.h"
#include "ApplyPlayerMaterialParamStartupTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UApplyPlayerMaterialParamStartupTask : public UOptionalDialogueStartupTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterMaterialParamType MaterialParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    UApplyPlayerMaterialParamStartupTask();

};

