import ytLogo from './image/yt-Logo.png'
import searchIcon from './image/search.png'
import phir from './image/phir.png'
import avtar from './image/avtar.png'
import {GoHomeFill} from 'react-icons/go'

function Videogrid(){
    return (
        <div class="thumbnail">
            <img src={phir} />
        </div>
        <div class="video-title">
            <div>
                <img src={avtar} height={30px} width={30px}></img> 
            </div>
            <div class="video-info">
                <h4 class="track-title margin-0">WRITE A TITLE</h4>
                <P class="margin-0 smaller-frontsize">T-series</P>
                <p class="margin-0 smaller-front-size">230M view . 1 month ago</p>
                </div>
            </div>
    )
}
function Home(){
    let video = [1,2,3,4,5,6,7,8,9,10,11,12]
    return (
      <div>
         <div class="header">
        <div class="header-iteam header-logo">
            <div class="header-first"></div>
            <div class="header-second">
                <img id='yt-Logo' src={ytLogo}/>
            </div>
        </div>
        <div class="header-iteam header-center">
            {/* <div class="header-search"></div> */}
            <input class="header-search" placeholder='Search...'/>
            <button class="search-button">
                <img class="small-image" src={searchIcon}></img>
            </button>
            <div class="header-mic"></div>
        </div>
        <div class="header-iteam header-proflie">
            <div class="header-tools"></div>
        </div>
        </div>
        <div class="main-section">
            <div class="main-left">
                <button class="yt-side-button">
                    <GoHomeFill /> <span class="side-button-label">Home</span>
                </button>
                <button class="yt-side-button">
                    <GoHomeFill /> <span class="side-button-label">Home</span>
                </button>
                <button class="yt-side-button">
                    <GoHomeFill /> <span class="side-button-label">Home</span>
                </button>
                <hr/>
                <button class="yt-side-button">
                    <GoHomeFill /> <span class="side-button-label">Home</span>
                </button> <button class="yt-side-button">
                    <GoHomeFill /> <span class="side-button-label">Home</span>
                </button> <button class="yt-side-button">
                    <GoHomeFill /> <span class="side-button-label">Home</span>
                </button>
            </div>
             <div class="main-right">
                {video.map((video) => {
                      return <VideoGrid />
                })}
             </div>
            </div>


        </div>
    )
}

export default Home;