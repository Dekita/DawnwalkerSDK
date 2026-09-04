#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "CharacterStateContainer.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCharacterStateContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UScriptStruct*> StatesToStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> StoredStates;
    
public:
    FCharacterStateContainer();
};

