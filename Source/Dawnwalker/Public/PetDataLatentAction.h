#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PetDataLatentAction.generated.h"

class ADawnwalkerCommonCharacterBase;
class ADawnwalkerPlayerCharacter;
class UAnimMontage;
class UObject;
class UPetDataLatentAction;

UCLASS(Blueprintable)
class DAWNWALKER_API UPetDataLatentAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPetDataLoaded, bool, bSuccess, UAnimMontage*, PlayerMontage, UAnimMontage*, PetMontage);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPetDataLoaded OnPetDataLoaded;
    
    UPetDataLatentAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPetDataLatentAction* GetDirectionalPetData(UObject* WorldContextObject, ADawnwalkerPlayerCharacter* InPlayer, ADawnwalkerCommonCharacterBase* InTarget);
    
};

