#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadingProviderInterface.h"
#include "AppearanceClothingUnitRow.h"
#include "AppearanceMeshQualityOverride.h"
#include "AppearanceSubsystem.generated.h"

class UAppearanceBase;
class UDataTable;
class UItemBaseDataAsset;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UAppearanceSubsystem : public UGameInstanceSubsystem, public ILoadingProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UAppearanceBase*> ExcludedAppearances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UItemBaseDataAsset*, FAppearanceClothingUnitRow> ItemAppearanceMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedAppearanceUnitTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FTopLevelAssetPath, UAppearanceBase*> LoadedAppearanceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FAppearanceMeshQualityOverride> MeshReplacementMap;
    
public:
    UAppearanceSubsystem();


    // Fix for true pure virtual functions not being implemented
};

