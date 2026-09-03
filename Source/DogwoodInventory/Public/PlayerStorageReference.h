#pragma once
#include "CoreMinimal.h"
#include "SpecialStorageReference.h"
#include "PlayerStorageReference.generated.h"

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API APlayerStorageReference : public ASpecialStorageReference {
    GENERATED_BODY()
public:
    APlayerStorageReference(const FObjectInitializer& ObjectInitializer);

};

