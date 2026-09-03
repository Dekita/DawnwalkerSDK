#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeNecrospeak.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API UQuestNodeNecrospeak : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference BodyRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorReference> LootableRefs;
    
    UQuestNodeNecrospeak();

};

