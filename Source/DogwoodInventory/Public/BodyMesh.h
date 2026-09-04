#pragma once
#include "CoreMinimal.h"
#include "BodyMesh.generated.h"

class UMaterialInterface;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FBodyMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> OverrideMaterials;
    
    DOGWOODINVENTORY_API FBodyMesh();
};

