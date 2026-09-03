#pragma once
#include "CoreMinimal.h"
#include "StandinProxyEntry.generated.h"

class AStandInMeshActor;
class UMaterialInterface;
class UStaticMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct STANDINACTOR_API FStandinProxyEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<AStandInMeshActor> StandinActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
public:
    FStandinProxyEntry();
};

