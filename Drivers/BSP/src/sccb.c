/**
 ****************************************************************************************************
 * @file        sccb.c
 * @author      婵繐绲块崑锝夊储閻旈鎽嶉柛銉ｅ灲濡诧拷(ALIENTEK)
 * @version     V1.0
 * @date        2022-09-06
 * @brief       OV缂侇垵顕ч崹顏堝箺閸曨偄鍓煎璁规嫹 SCCB 濡炵懓宕慨鈺傜閿濆洨鍨�
 * @license     Copyright (c) 2020-2032, 妤犵偛鐏濈粣鐐垫暜閸屾稒袝缂傚牐鍋愰弫鍝モ偓娑欏姉椤牠骞庨埀顒勫嫉婢舵劖顎欓柛蹇ｅ墮瀵帮拷
 ****************************************************************************************************
 * @attention
 *
 * 閻庡湱鍋ら悰娆撶嵁閸愭彃閰�:婵繐绲块崑锝夊储閻旈鎽� 闂傚啯瀵х亸婵堢磾閿燂拷 H743鐎殿喒鍋撻柛娆愬灦濠拷
 * 闁革负鍔庨崵搴ｆ喆閸℃侗鏆�:www.yuanzige.com
 * 闁瑰灈鍋撻柡鍫灥椤旀垿宕搁敓锟�:www.openedv.com
 * 闁稿浚鍓欏鍐磾閹存繃绲�:www.alientek.com
 * 閻犳劦鍘洪幏閬嶅捶閺夋寧绲�:openedv.taobao.com
 *
 * 濞ｅ浂鍠楅弫鑲╂嫚鐎涙ɑ顫�
 * V1.0 20220906
 * 缂佹鍏涚粩鏉戔枎閳ュ啿绲洪悽顖ゆ嫹
 *
 ****************************************************************************************************
 */

#include "sccb.h"
#include "delay.h"


void sccb_delay(void)
{
    delay_us(5);
}

/**
 * @brief       闁告帗绻傞～鎰板礌閺堫枆CB闁规亽鍎辫ぐ锟�
 * @param       闁哄喛鎷�
 * @retval      闁哄喛鎷�
 */
void sccb_init(void)
{
    SCCB_SCL_GPIO_CLK_ENABLE();                              /* SCL鐎殿喗娲濋崜濂稿籍閸洘瀵ù锝堝劵閸忥拷 */
    SCCB_SDA_GPIO_CLK_ENABLE();                              /* SDA鐎殿喗娲濋崜濂稿籍閸洘瀵ù锝堝劵閸忥拷 */

     /* SCL鐎殿喗娲濋崜鐓幬熼垾宕囩閻犱礁澧介悿锟�,鐎殿喒鍋撴繝鏇炵箺缁额參宕欓敓锟�,濞戞挸锕ユ刊锟� */
    GPIO_InitTypeDef gpio_init_struct;
    gpio_init_struct.Pin = SCCB_SCL_GPIO_PIN;
    gpio_init_struct.Mode = GPIO_MODE_OUTPUT_PP;
    gpio_init_struct.Pull = GPIO_PULLUP;
    gpio_init_struct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    HAL_GPIO_Init(SCCB_SCL_GPIO_PORT, &gpio_init_struct);    /* SCL鐎殿喗娲濋崜鐓幬熼垾宕囩閻犱礁澧介悿锟�,闁规亽鍔嶇亸铏綇閹惧啿姣�,濞戞挸锕ユ刊锟� */

    /* SDA鐎殿喗娲濋崜鐓幬熼垾宕囩閻犱礁澧介悿锟�,鐎殿喒鍋撴繝鏇炵箺缁额參宕欓敓锟�,濞戞挸锕ユ刊锟�, 閺夆晜鐟﹂悧杈╀焊閸欐鐟濋柣鈧妼閸熲偓閻犱礁澧介悿鍜篛闁哄倻鎳撻幃婊勭閿燂拷,
       鐎殿喒鍋撴繝鏇炵箺缁额參宕欓搹瑙勭暠闁哄啳娉涢埀顒婃嫹(=1), 濞戞梻鍠庤ぐ鍙夌閵夘煈鍤㈤柛娆愮墪椤﹀鏌堥妸銈勭箚闁告瑩顥撳▓鎴烆殗濡湱绉甸柣銏ゆ涧闁斤拷 */
    gpio_init_struct.Pin=SCCB_SDA_GPIO_PIN;
    gpio_init_struct.Mode = GPIO_MODE_OUTPUT_OD;
    HAL_GPIO_Init(SCCB_SDA_GPIO_PORT, &gpio_init_struct);    /* SDA鐎殿喗娲濋崜鐓幬熼垾宕囩閻犱礁澧介悿锟�,鐎殿喒鍋撴繝鏇炵箺缁额參宕欓敓锟�,濞戞挸锕ユ刊锟� */
}

/**
 * @brief       濞存籂鍛櫢SCCB閻犙冨槻椤劖绌遍垾鍐插▏
 * @param       闁哄喛鎷�
 * @retval      闁哄喛鎷�
 */
void sccb_start(void)
{
    SCCB_SDA(1);
    SCCB_SCL(1);
    sccb_delay();
    SCCB_SDA(0);    /* START濞ｅ洠鈧啿濞�: 鐟滅増褰嶤L濞戞挻妞介悵顕€寮敓锟�, SDA濞寸姴閰ｉ悵顕€宕ｅΟ璇茬亣濞达綇鎷�, 閻炴稏鍔庨妵姘辨導瀹勯偊娼楀ǎ鍥ｂ偓鍐插▏ */
    sccb_delay();
    SCCB_SCL(0);    /* 闂佽棄鍘栫紞鍢CB闁诡剝宕甸崵搴ㄦ晬鐏炶棄娅欏璺烘搐瑜板倿鏌呮担鐟扮仐闁规亽鍎查弫褰掑极閻楀牆绁� */
}

/**
 * @brief       濞存籂鍛櫢SCCB闁稿绮嶉娑欑┍閳ュ啿濞�
 * @param       闁哄喛鎷�
 * @retval      闁哄喛鎷�
 */
void sccb_stop(void)
{
    SCCB_SDA(0);    /* STOP濞ｅ洠鈧啿濞�: 鐟滅増褰嶤L濞戞挻妞介悵顕€寮敓锟�, SDA濞寸姴绨肩紞鍡涘矗濡鐏囧Δ鍌︽嫹, 閻炴稏鍔庨妵姘跺磻濠婂嫷鍓惧ǎ鍥ｂ偓鍐插▏ */
    sccb_delay();
    SCCB_SCL(1);
    sccb_delay();
    SCCB_SDA(1);    /* 闁告瑦鍨块埀顑胯CCB闁诡剝宕甸崵搴ｇ磼閹惧瓨灏嗗ǎ鍥ｂ偓鍐插▏ */
    sccb_delay();
}

/**
 * @brief       濞戞挸绉虫鍥偨閻戞怀K閹煎瓨姊婚悺锟�
 * @param       闁哄喛鎷�
 * @retval      闁哄喛鎷�
 */
void sccb_nack(void)
{
    sccb_delay();
    SCCB_SDA(1);    /* SCL 0 -> 1  闁哄喛鎷� SDA = 1, 閻炴稏鍔庨妵姘▔瀹ュ懐瀹夌紒娑虫嫹 */
    SCCB_SCL(1);
    sccb_delay();
    SCCB_SCL(0);    /* 濞存籂鍛櫢濞戞挴鍋撳☉鎿冧簼濡炲倿鏌﹂敓锟� */
    sccb_delay();
    SCCB_SDA(0);
    sccb_delay();
}

/**
 * @brief       SCCB,闁告瑦鍨块埀顑挎缁斿瓨绋夐鍕憻闁肩尨鎷�
 * @param       data  : 闁告瑦鍨块埀顑胯兌濞堟垿寮悧鍫濈ウ
 * @retval      0,闁瑰瓨鍔曟慨锟�;1,濠㈡儼绮剧憴锟�
 */
uint8_t sccb_send_byte(uint8_t data)
{
    uint8_t t, res;

    for (t = 0; t < 8; t++)
    {
        SCCB_SDA((data & 0x80) >> 7);   /* 濡ゅ倹眉缂嶅懘宕楅崼婵嗙岛闂侇偓鎷� */
        sccb_delay();
        SCCB_SCL(1);
        sccb_delay();
        SCCB_SCL(0);
        data <<= 1;                     /* 鐎归潻濡囦簺1濞达綇鎷�,闁烩偓鍔嬬花顒佺▔鐎ｂ晝顏辨繛鍡忊偓鍐茬岛闂侇偓鎷� */
    }
#if OV_SCCB_TYPE_NOD
    SCCB_SDA_IN();                      /* 閻犱礁澧介悿鍝燚A濞戞捇缂氱欢顓㈠礂閿燂拷 */
    sccb_delay();
#endif
    SCCB_SDA(1);                        /* 闁告瑦鍨块埀顑跨閻ｎ剟骞嬮敓锟�, 濞戞挾绮┃鈧梺鎻掞攻閺備讣DA缂佹拝鎷� */
    sccb_delay();
    SCCB_SCL(1);                        /* 闁规亽鍎查弫鍦箔椤戣法鐦堝ù锝忔嫹,濞寸姰鍎遍崹浠嬪棘椤撶喐笑闁告熬绠戣ぐ鍌炴焻娴ｇ懓鐏囬柛鏃撴嫹 */
    sccb_delay();

    if (SCCB_READ_SDA)
    {
        res = 1;                        /* SDA=1闁告瑦鍨块埀顑跨閵囨垹鎷归妷顖滅閺夆晜鏌ㄥú锟�1 */
    }
    else
    {
        res = 0;                        /* SDA=0闁告瑦鍨块埀顑跨劍閸ㄦ岸宕濋悤鍌滅閺夆晜鏌ㄥú锟�0 */
    }

    SCCB_SCL(0);
#if OV_SCCB_TYPE_NOD
    SCCB_SDA_OUT();                     /* 閻犱礁澧介悿鍝燚A濞戞捇缂氱欢顓㈠礄閿燂拷 */
    delay_us(50);
#endif

    return res;
}

/**
 * @brief       SCCB 閻犲洩顕цぐ鍥ㄧ▔閳ь剚绋夐鍕憻闁肩尨鎷�
 * @param       闁哄喛鎷�
 * @retval      閻犲洩顕ч崺宀勬儍閸曨剚娈堕柟鐧告嫹
 */
uint8_t sccb_read_byte(void)
{
   uint8_t i, receive = 0;

#if OV_SCCB_TYPE_NOD
    SCCB_SDA_IN();                      /* 閻犱礁澧介悿鍝燚A濞戞捇缂氱欢顓㈠礂閿燂拷 */
    delay_us(50);
#endif
    for (i = 0; i < 8; i++)             /* 闁规亽鍎查弫锟�1濞戞搩浜滈悺褔鎳為崒娑欐闁圭櫢鎷� */
    {
        sccb_delay();
        receive <<= 1;                  /* 濡ゅ倹眉缂嶅懘宕楅崼锝囩炕闁告埊鎷�,闁圭鍋撳ù鐘劚閸樻盯寮ㄧ捄鍝勭厒闁汇劌瀚弳鐔煎箲椤旇崵绉撮悷鏇氱娑斿繒绮旈敓锟� */
        SCCB_SCL(1);

        if (SCCB_READ_SDA)
        {
            receive++;
        }
        sccb_delay();
        SCCB_SCL(0);
    }
#if OV_SCCB_TYPE_NOD
    SCCB_SDA_OUT();                     /* 閻犱礁澧介悿鍝燚A濞戞捇缂氱欢顓㈠礄閿燂拷 */
    delay_us(50);
#endif

    return receive;
}
