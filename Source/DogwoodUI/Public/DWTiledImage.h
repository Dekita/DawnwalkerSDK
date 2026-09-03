#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "DWTiledImage.generated.h"

class UDWWorldMapTile;
class USizeBox;
class UTexture2D;
class UUniformGridPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DOGWOODUI_API UDWTiledImage : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> Tiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OriginalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerStickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadZoomSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* TileGrid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDWWorldMapTile*> TileWidgets;
    
public:
    UDWTiledImage();

    UFUNCTION(BlueprintCallable)
    void ZoomImage(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOriginalSize(FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void SetImagePosition(FVector2D NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetAndLoadTiles(const TArray<TSoftObjectPtr<UTexture2D>>& NewTiles);
    
    UFUNCTION(BlueprintCallable)
    void MoveImage(FVector2D Delta);
    
    UFUNCTION(BlueprintCallable)
    void LoadTiles();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetImagePosition();
    
    UFUNCTION(BlueprintCallable)
    void ClearTiles();
    
};

