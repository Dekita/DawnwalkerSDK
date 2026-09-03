#pragma once
#include "CoreMinimal.h"
#include "ECharacterDevelopmentMode.h"
#include "QuestConditionType.h"
#include "ECharacterDevelopmentConditionType.h"
#include "QuestConditionCharacterDevelopmentType.generated.h"

class UTraitAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionCharacterDevelopmentType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterDevelopmentConditionType PauseUntil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterDevelopmentMode SkillTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnyTrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTraitAsset* Trait;
    
public:
    UQuestConditionCharacterDevelopmentType();

};

