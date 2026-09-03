#pragma once
#include "CoreMinimal.h"
#include "HarvestableConfig.h"
#include "OnHarvestedChangedDelegateDelegate.h"
#include "PickupableComponent.h"
#include "HarvestableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODWORLD_API UHarvestableComponent : public UPickupableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHarvestedChangedDelegate OnHarvested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHarvestedChangedDelegate OnRegenerated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHarvestableConfig HarvestableConfig;
    
public:
    UHarvestableComponent(const FObjectInitializer& ObjectInitializer);

};

