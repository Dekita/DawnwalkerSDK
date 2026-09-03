#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestTeleportPoint.generated.h"

class UQuestComponent;
class USceneComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API AQuestTeleportPoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestComponent* QuestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DummyRoot;
    
public:
    AQuestTeleportPoint(const FObjectInitializer& ObjectInitializer);

};

