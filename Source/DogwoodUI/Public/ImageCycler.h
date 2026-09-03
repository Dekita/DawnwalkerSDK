#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ImageCycler.generated.h"

class UFullscreenBackground;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DOGWOODUI_API UImageCycler : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> Textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFullscreenBackground* Background;
    
    UImageCycler();

    UFUNCTION(BlueprintCallable)
    void ShowRandomImage(bool WithFadeOut);
    
    UFUNCTION(BlueprintCallable)
    void SetImage(int32 ImageIndex, bool WithFadeOut);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

