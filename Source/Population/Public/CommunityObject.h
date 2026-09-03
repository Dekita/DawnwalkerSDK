#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "CommunityObject.generated.h"

class UActorStubSystemInterface;
class UCommunitySystemInterface;
class UPopulationSystemInterface;

UCLASS(Abstract, Blueprintable)
class POPULATION_API ACommunityObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CommunityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunitySystemInterface* CommunitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPopulationSystemInterface* PopulationSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActorStubSystemInterface* StubSystem;
    
public:
    ACommunityObject(const FObjectInitializer& ObjectInitializer);

};

