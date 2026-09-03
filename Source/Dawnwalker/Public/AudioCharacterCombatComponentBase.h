#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AudioCharacterCombatComponentBase.generated.h"

class ADawnwalkerCharacterBase;
class UCombatComponentBase;
class UInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UAudioCharacterCombatComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInventoryComponent> InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatComponentBase> CombatComponentBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADawnwalkerCharacterBase* CastedOwner;
    
public:
    UAudioCharacterCombatComponentBase(const FObjectInitializer& ObjectInitializer);

};

