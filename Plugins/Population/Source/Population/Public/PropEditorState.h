#pragma once
#include "CoreMinimal.h"
#include "PropEditorState.generated.h"

class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FPropEditorState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SpawnedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* LoadedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ParentComponent;
    
    POPULATION_API FPropEditorState();
};

