#pragma once
#include "CoreMinimal.h"
#include "LootBagSystemInterface.h"
#include "Engine/EngineTypes.h"
#include "SaveGameInterface.h"
#include "LootBagSubsystem.generated.h"

class AActor;
class ULootBagsConfig;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ULootBagSubsystem : public ULootBagSystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULootBagsConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* LootBagClass;
    
public:
    ULootBagSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnLootBagActorEndPlay(AActor* SourceInventoryOwner, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    

    // Fix for true pure virtual functions not being implemented
};

