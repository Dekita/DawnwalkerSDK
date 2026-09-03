#pragma once
#include "CoreMinimal.h"
#include "LoadingProviderInterface.h"
#include "PopulationSystemInterface.h"
#include "RegEntry.h"
#include "Templates/SubclassOf.h"
#include "PopulationSystemImpl.generated.h"

class AActor;
class APawn;
class UMaterial;
class UPopulationExtension;
class UStaticMesh;

UCLASS(Blueprintable)
class POPULATION_API UPopulationSystemImpl : public UPopulationSystemInterface, public ILoadingProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FRegEntry> Registry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UPopulationExtension>, UPopulationExtension*> ExtensionInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* VisibilityMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterial* VisibilityMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterial* DebugVisibilityMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* VisibilityActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PawnsPool;
    
public:
    UPopulationSystemImpl();


    // Fix for true pure virtual functions not being implemented
};

