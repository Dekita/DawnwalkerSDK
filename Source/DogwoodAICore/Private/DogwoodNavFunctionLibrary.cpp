#include "DogwoodNavFunctionLibrary.h"

UDogwoodNavFunctionLibrary::UDogwoodNavFunctionLibrary() {
}

void UDogwoodNavFunctionLibrary::SetFillCollisionUnderneathForNavmesh(UStaticMeshComponent* StaticMeshComponent, bool bValue) {
}

void UDogwoodNavFunctionLibrary::SetCanEverAffectNavigationGeneration(UStaticMeshComponent* StaticMeshComponent, bool bValue) {
}

void UDogwoodNavFunctionLibrary::RegisterInNavigationSystem(UStaticMeshComponent* StaticMeshComponent, bool bValue) {
}

bool UDogwoodNavFunctionLibrary::GetCharacterPathFollowingState(const ACharacter* Character, TEnumAsByte<EPathFollowingStatus::Type>& PathFollowingStatus) {
    return false;
}

bool UDogwoodNavFunctionLibrary::GetCharacterNavLinkState(const ACharacter* Character, bool& bIsOnNavLink, bool& bIsOnSmartLink) {
    return false;
}


