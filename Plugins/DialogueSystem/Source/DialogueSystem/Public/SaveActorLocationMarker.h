#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "SaveActorLocationMarker.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API ASaveActorLocationMarker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterTag;
    
public:
    ASaveActorLocationMarker(const FObjectInitializer& ObjectInitializer);

};

