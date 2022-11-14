# OSI 模型與TCP/IP protocal suite 
  ## OSI有七層?簡述其功能 [資料來源](https://www.ithome.com.tw/tech/47085)
 ``` 
  實體層 （Physical Layer）: 在電線或其他`物理線材`上，傳遞訊號
  資料連結層 （Data Link Layer）: 傳輸過程中處理`流量控制`及`錯誤偵測`
  網路層 （Network Layer）: 資料在傳輸時，該網際網路協定將`IP位址`加入傳輸資料內，並把資料組成`封包`
  傳輸層 （Transport Layer）: 負責電腦整體的`資料傳輸`及`控制`
  會議層 （Session Layer）: 建立網路連線，等到資料傳輸結束時，再將連線中斷
  展示層 （Presentation Layer）: 將資料`轉換`表達方式
  應用層 （Application Layer）: 處理應用程式;提供網路應用服務
  ```
  ## 底下網路設備運作在哪一層? Hub, switch, router, L4-switch, proxy [資料來源](https://home.gamer.com.tw/creationDetail.php?sn=4247878)
 ```
  Hub : `Physical Layer`
  swutch : `Data Link Layer`
  router： `Network Layer`
  L4-switch : `Transport Layer`
  proxy : `Application Layer`
  ```
  ## TCP/IP有那些層?寫出與OSI七層模型的對應! [資料來源](https://home.gamer.com.tw/creationDetail.php?sn=4247878)
 
  TCP/IP Model  vs  OSI Model
  - network interface
    - pyhtsical
    - data link  
  - internet
    - network 
  - transport
    - transport
  - application
    - session
    - presentation
    - application
 
# 簡述底下應用層協定(英文全名與簡單功能說明):  (need  add)
- HTTP [資料來源](https://zh.wikipedia.org/zh-tw/%E8%B6%85%E6%96%87%E6%9C%AC%E4%BC%A0%E8%BE%93%E5%8D%8F%E8%AE%AE)
  - 超文本傳輸協定 HyperText Transfer Protocol
  - 讓`瀏覽器`和`伺服器`進行溝通
  - HTTP是全球資訊網的數據通信的`基礎`
  - 用於分佈式、協作式和超媒體訊息系統的`應用層協定`
  - 使用`TCP協定`
    - HTTPs [資料來源](https://zh.wikipedia.org/zh-tw/%E8%B6%85%E6%96%87%E6%9C%AC%E4%BC%A0%E8%BE%93%E5%AE%89%E5%85%A8%E5%8D%8F%E8%AE%AE)
      - 超文本傳輸安全協定 HyperText Transfer Protocol Secure
      - 使用`SSL/TLS`進行加密
      - 提供對網站伺服器的`身分認證`，保護交換資料的隱私與完整性
      - 經常用於全球資訊網上的交易支付和企業訊息系統中`敏感訊息`的傳輸
      - 基於預先安裝在作業系統中的`憑證頒發機構(CA)`
- DNS [資料來源](https://zh.wikipedia.org/zh-tw/%E5%9F%9F%E5%90%8D%E7%B3%BB%E7%BB%9F)
  -  網域名稱系統 Domain Name System
  -  `域名和IP位址相互對映`
  -  `分散式資料庫`
  -  使用`TCP和UDP埠53`
  -  使用基於`Punycode碼`的`IDNA系統`，可以將`Unicode`字串對映為有效的DNS字元集
     - DNSsec [資料來源](https://zh.wikipedia.org/zh-tw/%E5%9F%9F%E5%90%8D%E7%B3%BB%E7%BB%9F%E5%AE%89%E5%85%A8%E6%89%A9%E5%B1%95)
       - 域名系統安全擴充 Domain Name System Security Extensions
       - 可擴增的`分散式系統`
       - 驗證`不存在性`和`校驗資料完整性`
       - 不提供`機密性`和`可用性`
       - 保持向下相容性
- telnet [資料來源](https://zh.m.wikipedia.org/zh-hant/Telnet)
    - 應用層協議
    - 提供雙向、以文字字串為主的命令列介面互動功能
    - 使用於`網際網路`及`區域網`中
    - 使用虛擬終端機的形式
    - `遠端`登錄服務
      - ssh [資料來源](https://zh.wikipedia.org/zh-tw/Secure_Shell)
        - 安全外殼協議 Secure Shell Protocol
        - 加密的網絡傳輸協議
        - 建立`安全隧道`
        - `SSH客戶端`與`伺服器`之間的連接
        - `金鑰管理`
- ftp [資料來源](https://zh.wikipedia.org/zh-tw/%E6%96%87%E4%BB%B6%E4%BC%A0%E8%BE%93%E5%8D%8F%E8%AE%AE)
  - 檔案傳輸協定 File Transfer Protocol
  - `客戶端`和`伺服器`之間進行檔案傳輸
  - 應用層協定
  - `8位元`的客戶端-伺服器協定
  - 極高的延時
    - sftp [資料來源](https://zh.wikipedia.org/wiki/SSH%E6%96%87%E4%BB%B6%E4%BC%A0%E8%BE%93%E5%8D%8F%E8%AE%AE)
      - 安全檔案傳送協定 Secret File Transfer Protocol
      - 檔案存取、傳輸和管理功能的`網路傳輸協定`
      - 數據流連線
      - 能夠使用在許多不同的應用程式
      - 能夠被其他協定使用
- smtp [資料來源](https://zh.wikipedia.org/zh-tw/%E7%AE%80%E5%8D%95%E9%82%AE%E4%BB%B6%E4%BC%A0%E8%BE%93%E5%8D%8F%E8%AE%AE)
  - 簡單郵遞傳送協定 Simple Mail Transfer Protocol
  - 可用在傳送和接收電子郵件的資訊
  - 基於文字的協定
  - 是一個「推播」協定
  - 不允許從遠端伺服器上接收訊息
- pop3 [資料來源](https://zh.wikipedia.org/zh-tw/%E9%83%B5%E5%B1%80%E5%8D%94%E5%AE%9A)
  - 郵局協議 Post Office Protocol 
  - 支援使用`客戶端遠端`管理在伺服器上的電子郵件
  - 支援`離線郵件`處理
  - 只下載郵件，伺服器端並不刪除
  - `SSL加密`的POP3協定被稱為POP3S
- SNMP [資料來源](https://zh.wikipedia.org/wiki/%E7%AE%80%E5%8D%95%E7%BD%91%E7%BB%9C%E7%AE%A1%E7%90%86%E5%8D%8F%E8%AE%AE)
  - 簡單網路管理協定 Simple Network Management Protocol
  - 構成了`網際網路工程工作小組` (IETF，Internet Engineering Task Force)
  - 包含一個`應用層協定`、`資料庫模式`，和一組資料物件
  - 支援網路管理系統
  - 監測連接到網路上的裝置
# 簡述底下傳輸層協定(英文全名與簡單功能說明):
  - TCP [資料來源](https://zh.wikipedia.org/zh-tw/%E4%BC%A0%E8%BE%93%E6%8E%A7%E5%88%B6%E5%8D%8F%E8%AE%AE)
    - 傳輸控制協定 Transmission Control Protocol
    - IP層以及應用層的傳輸媒介
    - 透過網路將`封包`傳送給接收端實體的TCP層
    - TCP用一個`校驗和`函式來檢驗資料是否有錯誤
    - 連接建立、資料傳送和連接終止
   - TCP three-way handshaking(三項交握)
     - 防止已失效的連接請求報文段傳送到了伺服器端，因而產生錯誤
     - 網路中存在延遲的重複分組
   - TCP syn flood attack
     - 傳送大量的半連接請求去攻擊目標，致使目標阻斷服務，或藍屏 
  - UDP [資料來源](https://zh.wikipedia.org/zh-tw/%E7%94%A8%E6%88%B7%E6%95%B0%E6%8D%AE%E6%8A%A5%E5%8D%8F%E8%AE%AE)
    - 面向`數據包`的通信協定
    - 適用於不需要或在程式中執行錯誤檢查和糾正的應用
    - 不保留資料備份
    - 避免了`協定棧`中的開銷
    - 傳輸層
      - reliable(可靠的)
        - 執行速度較慢且可伸縮性較低
      - unreliable(不可靠的)
        - 會容忍某些資料遺失的場景
   - 簡述底下網路層協定(英文全名與簡單功能說明):
    - IP [資料來源](https://zh.wikipedia.org/zh-tw/%E7%BD%91%E9%99%85%E5%8D%8F%E8%AE%AE)
      - 網際協定 Internet Protocol
      - 電腦網路位址
      - 用於`封包交換資料`網路的協定
      - 定義了定址方法和資料報的封裝結構
      - 根據源主機和目的主機的位址來傳送資料
    - ICMP [資料來源](https://zh.wikipedia.org/zh-tw/%E4%BA%92%E8%81%94%E7%BD%91%E6%8E%A7%E5%88%B6%E6%B6%88%E6%81%AF%E5%8D%8F%E8%AE%AE)
      - 網際網路控制訊息協定 Internet Control Message Protocol
      - IP中傳送控制訊息提供問題回饋
      - 不可靠的
      - 網際網路協定套組的核心協定之一
      - 一般不用於在兩點間傳輸資料
 
