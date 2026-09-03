#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeCombatStyleManager.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeCombatStyleManager : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectHumanForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreferUnarmedCombatInHumanForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectVampireForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreferUnarmedCombatInVampireForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFistsInVampireForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableChangingCombatStyle;
    
public:
    UQuestNodeCombatStyleManager();

};

