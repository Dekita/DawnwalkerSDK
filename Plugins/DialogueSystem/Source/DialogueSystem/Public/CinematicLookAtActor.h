#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ELookAtActorType.h"
#include "CinematicLookAtActor.generated.h"

class UQuestComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, Config=Game)
class DIALOGUESYSTEM_API ACinematicLookAtActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtActorType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OwnerTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestComponent* QuestComponent;
    
public:
    ACinematicLookAtActor(const FObjectInitializer& ObjectInitializer);

};

