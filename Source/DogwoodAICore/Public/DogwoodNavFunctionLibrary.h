#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DogwoodNavFunctionLibrary.generated.h"

class ACharacter;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class DOGWOODAICORE_API UDogwoodNavFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDogwoodNavFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void SetFillCollisionUnderneathForNavmesh(UStaticMeshComponent* StaticMeshComponent, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigationGeneration(UStaticMeshComponent* StaticMeshComponent, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterInNavigationSystem(UStaticMeshComponent* StaticMeshComponent, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharacterPathFollowingState(const ACharacter* Character, TEnumAsByte<EPathFollowingStatus::Type>& PathFollowingStatus);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharacterNavLinkState(const ACharacter* Character, bool& bIsOnNavLink, bool& bIsOnSmartLink);
    
};

