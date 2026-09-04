#include "SpecialDialogueChoice.h"
#include "Templates/SubclassOf.h"

USpecialDialogueChoice::USpecialDialogueChoice() {
}

bool USpecialDialogueChoice::HasQuantity() const {
    return false;
}

FText USpecialDialogueChoice::GetText(const FText& InDesignerText, UObject* WorldContextObject) const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UPaperSprite> USpecialDialogueChoice::GetSprite() const {
    return NULL;
}

TSubclassOf<UCommonTextStyle> USpecialDialogueChoice::GetQuantityTextStyle(UObject* WorldContextObject, bool bIsProgressing) {
    return NULL;
}

FText USpecialDialogueChoice::GetQuantityText(UObject* WorldContextObject) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> USpecialDialogueChoice::GetIcon() const {
    return NULL;
}

int32 USpecialDialogueChoice::BP_GetQuantity(UObject* InWorldContext) const {
    return 0;
}


