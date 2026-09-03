#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestConditionType.h"
#include "ActorReference.h"
#include "ESenseConditionType.h"
#include "QuestConditionNPCSensedType.generated.h"

class APawn;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionNPCSensedType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESenseConditionType SenseCondition;
    
public:
    UQuestConditionNPCSensedType();

    UFUNCTION(BlueprintCallable)
    void OnNPCSensedHandler(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnNPCHeardHandler(APawn* Instigator, const FVector& Location, float Volume);
    
};

