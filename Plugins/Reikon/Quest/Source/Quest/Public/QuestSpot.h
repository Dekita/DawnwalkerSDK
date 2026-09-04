#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tracks/IMovieSceneTransformOrigin.h"
#include "QuestSpot.generated.h"

class UQuestComponent;
class USceneComponent;

UCLASS(Blueprintable)
class QUEST_API AQuestSpot : public AActor, public IMovieSceneTransformOrigin {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestComponent* QuestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DummyRoot;
    
public:
    AQuestSpot(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

