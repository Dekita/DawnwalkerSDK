#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "QuestConditionType.h"
#include "ActorReference.h"
#include "EDrinkBloodConditionType.h"
#include "QuestConditionDrinkBloodType.generated.h"

class UQuestConditionActorFilterType;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionDrinkBloodType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference Reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct TargetFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestConditionActorFilterType* ReferenceFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDrinkBloodConditionType PauseUntil;
    
public:
    UQuestConditionDrinkBloodType();

};

