#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpawnPoint.h"
#include "DynamicSpawnPoint.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class POPULATION_API ADynamicSpawnPoint : public ASpawnPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DynamicCommunityTags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TagIndex;
    
public:
    ADynamicSpawnPoint(const FObjectInitializer& ObjectInitializer);

};

