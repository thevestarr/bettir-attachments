// The real heads and the real combo _F lights are already in CUP's own rail
// lists; this only adds the BettIR-generated variants. One line per head,
// expanded into both slot classes below.
#define BETTIR_CUP_RAIL_ITEMS \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_Black) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_OD) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_Tan_Top) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_Black_Top) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_OD_Top) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_Flashlight_Tan_L) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_Flashlight_OD_L) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_Flashlight_Black_L) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_Top_Flashlight_OD_L) \
    BETTIR_CUP_RAILS_PEQ15(CUP_acc_ANPEQ_15_Top_Flashlight_Black_L) \
    BETTIR_CUP_RAILS_PEQ2(CUP_acc_ANPEQ_2_grey) \
    BETTIR_CUP_RAILS_PEQ2(CUP_acc_ANPEQ_2_desert) \
    BETTIR_CUP_RAILS_PEQ2(CUP_acc_ANPEQ_2_camo) \
    BETTIR_CUP_RAILS_PEQ2(CUP_acc_ANPEQ_2_Black_Top) \
    BETTIR_CUP_RAILS_PEQ2(CUP_acc_ANPEQ_2_Coyote_Top) \
    BETTIR_CUP_RAILS_PEQ2(CUP_acc_ANPEQ_2_OD_Top) \
    BETTIR_CUP_RAILS_PEQ2(CUP_acc_ANPEQ_2_Flashlight_Black_L) \
    BETTIR_CUP_RAILS_PEQ2(CUP_acc_ANPEQ_2_Flashlight_Coyote_L) \
    BETTIR_CUP_RAILS_PEQ2(CUP_acc_ANPEQ_2_Flashlight_OD_L) \
    BETTIR_CUP_RAILS_LLM(CUP_acc_LLM01_L) \
    BETTIR_CUP_RAILS_LLM(CUP_acc_LLM01_coyote_L) \
    BETTIR_CUP_RAILS_LLM(CUP_acc_LLM01_desert_L) \
    BETTIR_CUP_RAILS_LLM(CUP_acc_LLM01_hex_L) \
    BETTIR_CUP_RAILS_LLM(CUP_acc_LLM01_od_L) \
    BETTIR_CUP_RAILS_LLM(CUP_acc_LLM) \
    BETTIR_CUP_RAILS_LLM(CUP_acc_LLM_black) \
    BETTIR_CUP_RAILS_LLM(CUP_acc_LLM_od)

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        BETTIR_CUP_RAIL_ITEMS
    };
};

class PointerSlot;
class PointerSlot_Rail: PointerSlot {
    class compatibleItems {
        BETTIR_CUP_RAIL_ITEMS
    };
};
