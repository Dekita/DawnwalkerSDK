#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RebelSpatialElementProxyInterface.h"
#include "DogwoodChatDesc.h"
#include "DogwoodDialogueDesc.h"
#include "ChatArea.generated.h"

class UBoxComponent;
class UCinematicDialogue;
class UDogwoodAIStub;

UCLASS(Blueprintable)
class DAWNWALKER_API AChatArea : public AActor, public IRebelSpatialElementProxyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActorsMustBeInActionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCinematicDialogue>> Dialogues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDogwoodDialogueDesc> DialoguesV2;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDogwoodChatDesc> CachedChats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCinematicDialogue* PlayingDialogueInstance;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UDogwoodAIStub>> AssignedStubs;
    
public:
    AChatArea(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

