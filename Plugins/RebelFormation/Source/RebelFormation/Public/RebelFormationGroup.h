#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ERebelFormationAreaType.h"
#include "ERebelFormationState.h"
#include "RebelFormationGroup_ColumnData.h"
#include "RebelFormationGroup_FormationPositionData.h"
#include "RebelFormationGroup.generated.h"

class AActor;
class ARebelFormationMoveLocation;
class UDataTable;
class URebelFormationDataDefinition;
class URebelFormationGroupDefinition;
class URebelFormationGroup_PawnData;

UCLASS(Blueprintable)
class REBELFORMATION_API URebelFormationGroup : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelFormationDataDefinition* FormationDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelFormationGroup_FormationPositionData FormationPositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelFormationGroup_ColumnData> ColumnsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URebelFormationGroup_PawnData*> FormationPawnsData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, URebelFormationGroup_PawnData*> PawnToData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LastPawnPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelFormationState FormationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelFormationGroupDefinition* GroupDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARebelFormationMoveLocation* FormationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GroupDataTable;
    
public:
    URebelFormationGroup();

    UFUNCTION(BlueprintCallable)
    void StopCombatBehaviour();
    
    UFUNCTION(BlueprintCallable)
    void StartCombatBehaviour();
    
    UFUNCTION(BlueprintCallable)
    void ResumeTransport(const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void PauseTransport(const bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInArea(const FVector& Point, ERebelFormationAreaType AreaType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotInCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuardDefeated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuard(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFormationSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSpawnedGuards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelFormationState GetFormationState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFormationPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAreaSize(const ERebelFormationAreaType AreaType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLeftArea(const ERebelFormationAreaType AreaType, const bool bPlayerOnlyCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIsInArea(const ERebelFormationAreaType AreaType, const bool bPlayerOnlyCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnteredArea(const ERebelFormationAreaType AreaType, const bool bPlayerOnlyCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartCombatBehaviour();
    
};

