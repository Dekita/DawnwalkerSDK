#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "CommunityObject.h"
#include "EKeepDistanceToPoints.h"
#include "GuardAreaInterface.h"
#include "PopulationAreaEntry.h"
#include "ZoneProviderInterface.h"
#include "PopulationArea.generated.h"

class AActor;
class ACharacter;
class ADynamicActionPoint;
class ADynamicSpawnPoint;
class AGuardArea;
class UBoxComponent;
class UCommunity_PopulationArea;
class UDataTable;
class UPersistencyComponent;
class UPopulationAreaConditionType;
class UPopulationExtensionExecutionContext;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class POPULATION_API APopulationArea : public ACommunityObject, public IZoneProviderInterface, public IGuardAreaInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OuterCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InnerCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistencyComponent* PersistencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttachedGuardArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGuardArea> GuardArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPopulationAreaEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPopulationAreaConditionType*> StartConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPopulationAreaEntry> ActiveEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* GeneratedDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommunity_PopulationArea* SpawnActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommunity_PopulationArea* DespawnActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADynamicSpawnPoint*> DynamicSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADynamicActionPoint*> DynamicActionPoints;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, TWeakObjectPtr<ACharacter>> SpawnedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> UsedLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPopulationExtensionExecutionContext* ExtensionExecutionContext;
    
public:
    APopulationArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEndOverlapOuterBox(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapOuterBox(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bFromSweep, const FHitResult& InSweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRandomLocationInsideInnerBoxComponent(const AActor* TestActor, FVector& Location, const FRotator& Rotation, EKeepDistanceToPoints KeepDistance, float Distance) const;
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAPOrderOptions() const;
    

    // Fix for true pure virtual functions not being implemented
};

