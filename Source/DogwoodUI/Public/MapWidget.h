#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMapLabelType.h"
#include "MappinInstanceId.h"
#include "Curves/CurveFloat.h"
#include "DWActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "MapWidget.generated.h"

class UCanvasPanelSlot;
class UDWWorldMapTile;
class UMapLabel;
class UMapMappin;
class UPanelWidget;
class USizeBox;
class UTexture2D;
class UUniformGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UMapWidget : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FastTravelEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapMappin* SelectedMappin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FMappinInstanceId, UMapMappin*> UsedMappins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> MapTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapMappin> MappinClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EMapLabelType>, TSubclassOf<UMapLabel>> MapLabelClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ZoomToLabelScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FMappinInstanceId, UMapMappin*> MappinCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapToMappinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OriginalMapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapMappin* CustomMappin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistrictLabelVisibilityZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerStickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUserMappinInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve GamepadMovementSpeedMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialNewMappinAnimationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EachNewMappinAnimationDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapLabel* SelectedLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMapLabel*, FVector2D> Labels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, UDWWorldMapTile*> MapTileWidgets;
    
public:
    UMapWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void Zoom(float ZoomSpeed, FVector2D ZoomPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D WorldToMapPosition(FVector2D WorldPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float WorldToMapDistance(float InDistance);
    
    UFUNCTION(BlueprintCallable)
    FVector2D TrySelectMappinClosestToCursor();
    
    UFUNCTION(BlueprintCallable)
    void SetMapSize(FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void SetMapPosition(FVector2D position);
    
    UFUNCTION(BlueprintCallable)
    FMappinInstanceId RefreshMappinsAndGetPlayerId();
    
    UFUNCTION(BlueprintCallable)
    void RefreshLabelPositions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D RefreshAndGetPlayerPosition();
    
    UFUNCTION(BlueprintCallable)
    void PrepareMappin(const FMappinInstanceId& MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMappinSelected(UMapMappin* Mappin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMappinDeselected(UMapMappin* Mappin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D LocalToMapPosition(FVector2D LocalPosition);
    
    UFUNCTION(BlueprintCallable)
    void LoadMapTiles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTooltipZOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUniformGridPanel* GetTileContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMapVisibleSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USizeBox* GetMapSizeBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMapSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPanelWidget* GetMappinContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMapCachedHalfSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UCanvasPanelSlot* GetGamepadCursorSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetGamepadCursorMapPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentZoom();
    
    UFUNCTION(BlueprintCallable)
    void FillMapTiles();
    
    UFUNCTION(BlueprintCallable)
    void CreateLabels();
    
    UFUNCTION(BlueprintCallable)
    void ClearMapTiles();
    
};

