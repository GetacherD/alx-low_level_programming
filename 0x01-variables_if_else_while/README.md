<!DOCTYPE html>
<!-- saved from url=(0040)https://intranet.alxswe.com/projects/213 -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags -->
    <meta name="description" content="">
    <meta name="google" content="notranslate">

      <script type="text/javascript" async="" src="./0x01_files/js"></script><script async="" src="./0x01_files/gtm.js"></script><script>
    window.dataLayer = window.dataLayer || [];
    dataLayer.push({"userId":14407,"visitorType":"student","batch":{"id":9,"fullNameWithC":"ADD-0222 (C#5)","schoolLocation":{"id":4,"name":"Addis Ababa"}},"curriculum":{"id":1,"name":"SE Foundations"}});

    window.gtm_user_custom_event = function (name, options) {
      if (typeof name === 'undefined') {
        return;
      }

      window.dataLayer.push({
        customEventOptions: typeof options !== 'undefined' ? options : {},
        event: name,
      });
    }
  </script>

  <!-- Google Tag Manager -->
  <script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
  new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
  j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
  'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
  })(window,document,'script','dataLayer','GTM-N4C8MF2');</script>
  <!-- End Google Tag Manager -->


    <title>Project: 0x01. C - Variables, if, else, while | Addis Ababa Intranet</title>

      <link rel="stylesheet" href="./0x01_files/xgz4ilr.css">
      <link rel="stylesheet" media="all" href="./0x01_files/application_alx-7a9d52d828d1d614fe51a0c6f1523559f6457fc5b2e100e69e8267f43718d1d7.css">
      <script src="./0x01_files/loader.js"></script>
      <script src="./0x01_files/application-54114f22a70e5f69761998e8ac495fbe3bc128fecc9e13aa1cea5d1b8aa37b6d.js"></script>
      <link rel="shortcut icon" type="image/x-icon" href="https://intranet.alxswe.com/favicon_alx.ico">
      <meta name="csrf-param" content="authenticity_token">
<meta name="csrf-token" content="o17x60GuE5UhfV_dNSM6M0o3s_nIwqCrZMvuZmcwD-V7VJJIVzWaWPGcWLOuHJVFKZQv3nR1fE0xbQ8Q2bzNXA">

      <link rel="apple-touch-icon" href="https://intranet.alxswe.com/apple-touch-icon_alx.png">

      <!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->
      <!--[if lt IE 9]>
        <script src="https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js"></script>
        <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
      <![endif]-->

      <!-- Store user timezone -->
      <script>
        Cookies.set('timezone', (new Date()).getTimezoneOffset() / -60.0);
      </script>

      <!-- intro.js for interactive onboarding -->

      <!-- React -->
      <script src="./0x01_files/application-229fc8d965bb8abbef5b.js"></script>
      <link rel="stylesheet" media="screen" href="./0x01_files/application-87456da7.css">
  <style type="text/css">
@font-face {
  font-weight: 400;
  font-style:  normal;
  font-family: circular;

  src: url('chrome-extension://liecbddmkiiihnedobmlmillhodjkdmb/fonts/CircularXXWeb-Book.woff2') format('woff2');
}

@font-face {
  font-weight: 700;
  font-style:  normal;
  font-family: circular;

  src: url('chrome-extension://liecbddmkiiihnedobmlmillhodjkdmb/fonts/CircularXXWeb-Bold.woff2') format('woff2');
}</style></head>

  <body class="signed_in env_production notranslate" translate="no" data-theme-suffix="_alx" data-new-gr-c-s-check-loaded="14.1110.0" data-gr-ext-installed=""><div data-v-32478853="" class="odm_extension image_downloader_wrapper"><!----></div>
      <!-- Google Tag Manager (noscript) -->
  <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-N4C8MF2"
  height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
  <!-- End Google Tag Manager (noscript) -->


      <input type="hidden" id="hbtn-slack-url" value="https://alx-students.slack.com">
      <nav class="navbar navbar-default navbar-fixed-top topbar visible-xs">
  <div class="navbar-header">
    <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navbar-mobile" aria-expanded="false">
      <span class="sr-only">Toggle navigation</span>
      <span class="icon-bar"></span>
      <span class="icon-bar"></span>
      <span class="icon-bar"></span>
    </button>

    <a class="navbar-brand" href="https://intranet.alxswe.com/">
      <div class="logo"></div>
</a>  </div>

  <div class="collapse navbar-collapse navigation" id="navbar-mobile">
    <ul class="nav navbar-nav">
      


    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="My Planning"><a href="https://intranet.alxswe.com/planning/me"><div class="icon "><i aria-hidden="true" class="fa fa-calendar "></i></div><div class="visible-xs">My Planning</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-current-projects-item" title="" data-original-title="Projects"><a href="https://intranet.alxswe.com/projects/current"><div class="icon "><i aria-hidden="true" class="fa fa-code-fork "></i></div><div class="visible-xs">Projects</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="QA Reviews I can make"><a href="https://intranet.alxswe.com/corrections/to_review"><div class="icon "><i aria-hidden="true" class="fa fa-check "></i></div><div class="visible-xs">QA Reviews I can make</div></a></li>
    
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Evaluation quizzes"><a href="https://intranet.alxswe.com/dashboards/my_current_evaluation_quizzes"><div class="icon "><i aria-hidden="true" class="fa fa-question "></i></div><div class="visible-xs">Evaluation quizzes</div></a></li>

    <hr title="My resources">

    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Curriculums"><a href="https://intranet.alxswe.com/dashboards/my_curriculums"><div class="icon "><i aria-hidden="true" class="fa fa-graduation-cap "></i></div><div class="visible-xs">Curriculums</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-concepts-item" title="" data-original-title="Concepts"><a href="https://intranet.alxswe.com/concepts"><div class="icon "><i aria-hidden="true" class="fa fa-file-text "></i></div><div class="visible-xs">Concepts</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-dashboards-video-rooms" title="" data-original-title="Conference rooms"><a href="https://intranet.alxswe.com/dashboards/video_rooms"><div class="icon "><i aria-hidden="true" class="fa fa-comments "></i></div><div class="visible-xs">Conference rooms</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Servers"><a href="https://intranet.alxswe.com/servers"><div class="icon "><i aria-hidden="true" class="fa fa-server "></i></div><div class="visible-xs">Servers</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-dashboards-my-containers" title="" data-original-title="Sandboxes"><a href="https://intranet.alxswe.com/user_containers/current"><div class="icon "><i aria-hidden="true" class="fa fa-terminal "></i></div><div class="visible-xs">Sandboxes</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Tools"><a href="https://intranet.alxswe.com/dashboards/my_tools"><div class="icon "><i aria-hidden="true" class="fa fa-wrench "></i></div><div class="visible-xs">Tools</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Video on demand"><a href="https://intranet.alxswe.com/dashboards/videos"><div class="icon "><i aria-hidden="true" class="fa fa-film "></i></div><div class="visible-xs">Video on demand</div></a></li>

      <hr title="My campus">

      
      <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Peers"><a href="https://intranet.alxswe.com/users/peers"><div class="icon "><i aria-hidden="true" class="fa fa-users "></i></div><div class="visible-xs">Peers</div></a></li>
      <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Captain&#39;s Logs"><a href="https://intranet.alxswe.com/dashboards/my_captain_log"><div class="icon "><i aria-hidden="true" class="fa fa-book "></i></div><div class="visible-xs">Captain's Logs</div></a></li>


<hr class="visible-xs">

<li>
    <div data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Slack">
      <a target="_blank" href="https://alx-students.slack.com/">
        <div class="image slack">
          <div class="inner"></div>
        </div>
        <div class="visible-xs">Slack</div>
</a>    </div>

  <div data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="My Profile">
    <a href="https://intranet.alxswe.com/users/my_profile">
        <div class="image ">
          <div class="inner" style="background-image: url(&#39;https://s3.amazonaws.com/alx-intranet.hbtn.io/users/photos/000/014/407/thumb/IMG_3095_co__py.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230518%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20230518T044305Z&amp;X-Amz-Expires=600&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=6c18518389cbac6294ed35278abd4ace20f488f41d1984da16b2708f213f251e&#39;)"></div>
        </div>

      <div class="visible-xs">My Profile</div>
</a>  </div>
</li>


    </ul>
  </div>
</nav>

      <div class="hidden-xs navigation sidebar">
  <a class="logo-container" href="https://intranet.alxswe.com/">
    <div class="logo"></div>
</a>
  <ul>
    


    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="My Planning"><a href="https://intranet.alxswe.com/planning/me"><div class="icon "><i aria-hidden="true" class="fa fa-calendar "></i></div><div class="visible-xs">My Planning</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-current-projects-item" title="" data-original-title="Projects"><a href="https://intranet.alxswe.com/projects/current"><div class="icon "><i aria-hidden="true" class="fa fa-code-fork "></i></div><div class="visible-xs">Projects</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="QA Reviews I can make"><a href="https://intranet.alxswe.com/corrections/to_review"><div class="icon "><i aria-hidden="true" class="fa fa-check "></i></div><div class="visible-xs">QA Reviews I can make</div></a></li>
    
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Evaluation quizzes"><a href="https://intranet.alxswe.com/dashboards/my_current_evaluation_quizzes"><div class="icon "><i aria-hidden="true" class="fa fa-question "></i></div><div class="visible-xs">Evaluation quizzes</div></a></li>

    <hr title="My resources">

    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Curriculums"><a href="https://intranet.alxswe.com/dashboards/my_curriculums"><div class="icon "><i aria-hidden="true" class="fa fa-graduation-cap "></i></div><div class="visible-xs">Curriculums</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-concepts-item" title="" data-original-title="Concepts"><a href="https://intranet.alxswe.com/concepts"><div class="icon "><i aria-hidden="true" class="fa fa-file-text "></i></div><div class="visible-xs">Concepts</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-dashboards-video-rooms" title="" data-original-title="Conference rooms"><a href="https://intranet.alxswe.com/dashboards/video_rooms"><div class="icon "><i aria-hidden="true" class="fa fa-comments "></i></div><div class="visible-xs">Conference rooms</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Servers"><a href="https://intranet.alxswe.com/servers"><div class="icon "><i aria-hidden="true" class="fa fa-server "></i></div><div class="visible-xs">Servers</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" id="sidebar-dashboards-my-containers" title="" data-original-title="Sandboxes"><a href="https://intranet.alxswe.com/user_containers/current"><div class="icon "><i aria-hidden="true" class="fa fa-terminal "></i></div><div class="visible-xs">Sandboxes</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Tools"><a href="https://intranet.alxswe.com/dashboards/my_tools"><div class="icon "><i aria-hidden="true" class="fa fa-wrench "></i></div><div class="visible-xs">Tools</div></a></li>
    <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Video on demand"><a href="https://intranet.alxswe.com/dashboards/videos"><div class="icon "><i aria-hidden="true" class="fa fa-film "></i></div><div class="visible-xs">Video on demand</div></a></li>

      <hr title="My campus">

      
      <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Peers"><a href="https://intranet.alxswe.com/users/peers"><div class="icon "><i aria-hidden="true" class="fa fa-users "></i></div><div class="visible-xs">Peers</div></a></li>
      <li data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Captain&#39;s Logs"><a href="https://intranet.alxswe.com/dashboards/my_captain_log"><div class="icon "><i aria-hidden="true" class="fa fa-book "></i></div><div class="visible-xs">Captain's Logs</div></a></li>


<hr class="visible-xs">

<li>
    <div data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="Slack">
      <a target="_blank" href="https://alx-students.slack.com/">
        <div class="image slack">
          <div class="inner"></div>
        </div>
        <div class="visible-xs">Slack</div>
</a>    </div>

  <div data-container="body" data-placement="right" data-toggle="tooltip" title="" data-original-title="My Profile">
    <a href="https://intranet.alxswe.com/users/my_profile">
        <div class="image ">
          <div class="inner" style="background-image: url(&#39;https://s3.amazonaws.com/alx-intranet.hbtn.io/users/photos/000/014/407/thumb/IMG_3095_co__py.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230518%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20230518T044305Z&amp;X-Amz-Expires=600&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=6c18518389cbac6294ed35278abd4ace20f488f41d1984da16b2708f213f251e&#39;)"></div>
        </div>

      <div class="visible-xs">My Profile</div>
</a>  </div>
</li>


  </ul>
</div>


    <main>
        <div id="layout-bars">
          
          <div class="px-5 py-3" id="student-switch-curriculum">
  <div class="dropdown d-flex flex-column gap-1">
    <span class="fs-small text-muted">Curriculum</span>

    <div aria-haspopup="true" aria-expanded="false" class="align-items-center d-flex gap-3" data-toggle="dropdown" id="student-switch-curriculum-dropdown" role="button">
      <div class="d-flex flex-column" style="line-height: 16px">
        <span class="fs-4 fw-600">
          SE Foundations
        </span>
        <span class="fs-small text-muted">
          Average: <span class="fw-500">144.51%</span>
        </span>
      </div>

      <div class="d-flex flex-column justify-content-center">
        <span style="margin-bottom: -4px">
          <i aria-hidden="true" class="fa fa-angle-up  fa-fw"></i>
        </span>
        <span style="margin-top: -4px">
          <i aria-hidden="true" class="fa fa-angle-down  fa-fw"></i>
        </span>
      </div>
    </div>

    <ul aria-labelledby="student-switch-curriculum-dropdown" class="dropdown-menu fs-5">
        <li>
          <a href="https://intranet.alxswe.com/curriculums/1/observe">
            <div class="align-items-center d-flex py-2">
              <div class="d-flex flex-column" style="line-height: 16px">
                <span class="fs-4 fw-500">
                  SE Foundations
                </span>
                <span class="text-muted">
                  Average: <span class="fw-500">144.51%</span>
                </span>
              </div>

                <span class="fw-600 text-info" style="margin-left: 42px">
                  <i aria-hidden="true" class="fa fa-check "></i>
                </span>
            </div>
</a>        </li>
        <li>
          <a href="https://intranet.alxswe.com/curriculums/17/observe">
            <div class="align-items-center d-flex py-2">
              <div class="d-flex flex-column" style="line-height: 16px">
                <span class="fs-4 fw-500">
                  Short Specializations
                </span>
                <span class="text-muted">
                  Average: <span class="fw-500">125.83%</span>
                </span>
              </div>

            </div>
</a>        </li>
    </ul>
  </div>
</div>

          
          
          
        </div>

      <article class="">

        
<div class="project row">
  <div class="col-xs-12 col-md-10 col-lg-8 contains-images">

      <h1 class="gap">0x01. C - Variables, if, else, while</h1>

  <div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[{&quot;id&quot;:7,&quot;value&quot;:&quot;C&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;}]}" data-react-cache-id="tags/Tags-0"><div class="align-items-center d-flex flex-wrap gap-3 my-2"><span class="label label-primary" style="font-size: 14px;">C</span></div></div>

  <div data-react-class="projects/ProjectMetadata" data-react-props="{&quot;metadata&quot;:{&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;correction&quot;:{&quot;released&quot;:true,&quot;requires_auto_correction&quot;:true,&quot;requires_manual_correction&quot;:false},&quot;bpi&quot;:{&quot;current&quot;:false,&quot;in_second_deadline&quot;:false,&quot;starts_at&quot;:&quot;2022-03-11T06:00:00.000+03:00&quot;,&quot;ends_at&quot;:&quot;2022-03-12T06:00:00.000+03:00&quot;,&quot;second_deadline_at&quot;:&quot;2022-03-15T06:00:00.000+03:00&quot;}}}" data-react-cache-id="projects/ProjectMetadata-0"><ul class="list-group metadata" id="project-metadata"><li class="list-group-item"><i aria-hidden="true" class="fa fa-user fa-fw"></i> By: Julien Barbier</li><li class="list-group-item"><i aria-hidden="true" class="fa fa-cog fa-fw"></i> Weight: 1</li><li class="list-group-item"><i aria-hidden="true" class="fa fa-calendar fa-fw"></i> Project over - took place from <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2022-03-11 06:00 (GMT+03:00)"><span class="datetime">Mar 11, 2022 6:00 AM</span></span> to <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2022-03-12 06:00 (GMT+03:00)"><span class="datetime">Mar 12, 2022 6:00 AM</span></span></li><li class="list-group-item"><i aria-hidden="true" class="fa fa-check-square fa-fw"></i> An auto review will be launched at the deadline</li></ul></div>

  <div class="sm-gap clean well">
  <h4>In a nutshell…</h4>
  <ul>


      <li>
        <strong>Auto QA review:</strong>
          70.0/70 mandatory
            &amp;
            19.95/21 optional
      </li>
    <li>
      <strong>Altogether:</strong>
        &nbsp;<strong>195.0%</strong>
        <ul>
          <li>Mandatory: 100.0%</li>
            <li>Optional: 95.0%</li>
            <li>
              Calculation:&nbsp;
                  100.0%
                    + (100.0% * 95.0%)
              &nbsp;==&nbsp;<strong>195.0%</strong>
            </li>
        </ul>
    </li>
  </ul>
</div>




    


    <div id="project_id" style="display: none" data-project-id="213"></div>



      

      

      <div class="panel panel-default" id="project-description">
  <div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="https://intranet.alxswe.com/rltoken/PkAydT3D9u5pN3nPCAlNZQ" title="Everything you need to know to start with C.pdf" target="_blank">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.</em>)</li>
<li><a href="https://intranet.alxswe.com/rltoken/58ThnAAxwJv5s_ceKMMPhw" title="Keywords and identifiers" target="_blank">Keywords and identifiers</a> </li>
<li><a href="https://intranet.alxswe.com/rltoken/2sXkmDiD7BF7pNIOxMQWFA" title="integers" target="_blank">integers</a> </li>
<li><a href="https://intranet.alxswe.com/rltoken/S-b9MN2iELhSEwCI093Vzw" title="Arithmetic Operators in C" target="_blank">Arithmetic Operators in C</a> </li>
<li><a href="https://intranet.alxswe.com/rltoken/usvxrTB3ko5kGTq48p5fSA" title="If statements in C" target="_blank">If statements in C</a> </li>
<li><a href="https://intranet.alxswe.com/rltoken/CU6mSX1qdZKOhDEgmToUGA" title="if...else statement" target="_blank">if…else statement</a> </li>
<li><a href="https://intranet.alxswe.com/rltoken/O1N-qacaTC-BHXm3Dp3eUA" title="Relational operators" target="_blank">Relational operators</a> </li>
<li><a href="https://intranet.alxswe.com/rltoken/TaX_y6ll4cRfxCrxG8ZuNQ" title="Logical operators" target="_blank">Logical operators</a> </li>
<li><a href="https://intranet.alxswe.com/rltoken/mwx2_bj3gIFEgCqdwdTp4w" title="while loop in C" target="_blank">while loop in C</a> </li>
<li><a href="https://intranet.alxswe.com/rltoken/MW4Ob-6JLWt7Zn6vZ0EsBw" title="While loop" target="_blank">While loop</a> </li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>ascii</code> (<em>You do not need to learn about <code>scanf</code>, <code>getc</code>, <code>getchar</code>, <code>EOF</code>, <code>EXIT_SUCCESS</code>, <code>time</code>, <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code>, <code>for</code> loops, <code>do...while</code> loops, functions.</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="https://intranet.alxswe.com/rltoken/qBrRkO5QsdzGun5FkaMooQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are the arithmetic operators and how to use them</li>
<li>What are the logical operators (sometimes called boolean operators) and how to use them</li>
<li>What the the relational operators and how to use them</li>
<li>What values are considered TRUE and FALSE in C</li>
<li>What are the boolean operators and how to use them</li>
<li>How to use the <code>if</code>, <code>if ... else</code> statements</li>
<li>How to use comments</li>
<li>How to declare variables of types <code>char</code>, <code>int</code>, <code>unsigned int</code></li>
<li>How to assign values to variables</li>
<li>How to print the values of variables of type <code>char</code>, <code>int</code>, <code>unsigned int</code> with <code>printf</code></li>
<li>How to use the <code>while</code> loop</li>
<li>How to use variables with the <code>while</code> loop</li>
<li>How to print variables using <code>printf</code></li>
<li>What is the <code>ASCII</code> character set</li>
<li>What are the purpose of the <code>gcc</code> flags <code>-m32</code> and <code>-m64</code></li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use <code>system</code></li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
</ul>

  </div>
</div>


      

        <div class="panel panel-default" id="project-quiz-questions-title">
    <div class="panel-heading">
      <h3 class="panel-title">
        Quiz questions
      </h3>
    </div>

    <div class="panel-body">

        <div class="alert alert-info">
          <strong>Great!</strong>
          You've completed the quiz successfully! Keep going!
          <span id="quiz_questions_collapse_toggle">(Show quiz)</span>
        </div>

      <section class="quiz_questions_show_container" style="display: none;">
          <div class="quiz_question_item_container" data-role="quiz_question372" data-position="4">
            <div class=" clearfix" id="quiz_question-372">

    <h4 class="quiz_question">
        
        Question #0
    </h4>

    <!-- Quiz question Body -->
    <p>Which of the following are valid <code>if</code> statements in ANSI C and Betty-compliant? (Considering <code>a</code> and <code>b</code> two variables of type <code>int</code>)</p>

<p>Please select all correct answers</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="372">
                <li class="">

  <input type="checkbox" name="372" id="372-1505144525558" value="1505144525558" data-quiz-answer-id="1505144525558" data-quiz-question-id="372" disabled="disabled">
  <label for="372-1505144525558"><pre><code>if ((((((a &gt; b))))))
{
  return (a);
}
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="372" id="372-1505144506749" value="1505144506749" data-quiz-answer-id="1505144506749" data-quiz-question-id="372" disabled="disabled">
  <label for="372-1505144506749"><pre><code>if {a &gt; b}
(
  return {a};
)
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="372" id="372-1505144498321" value="1505144498321" data-quiz-answer-id="1505144498321" data-quiz-question-id="372" disabled="disabled" checked="checked">
  <label for="372-1505144498321"><pre><code>if (a &gt; b)
{
  return (a);
}
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="372" id="372-1505144598760" value="1505144598760" data-quiz-answer-id="1505144598760" data-quiz-question-id="372" disabled="disabled" checked="checked">
  <label for="372-1505144598760"><pre><code>if (a &gt; b)
  return (a);
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="372" id="372-1505144455898" value="1505144455898" data-quiz-answer-id="1505144455898" data-quiz-question-id="372" disabled="disabled">
  <label for="372-1505144455898"><pre><code>if a &gt; b
{
  return (a);
}
</code></pre>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question368" data-position="1">
            <div class=" clearfix" id="quiz_question-368">

    <h4 class="quiz_question">
        
        Question #1
    </h4>

    <!-- Quiz question Body -->
    <p>What is the size of the <code>unsigned int</code> data type?</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="368">
                <li class="">

  <input type="radio" name="368" id="368-1505143984248" value="1505143984248" data-quiz-answer-id="1505143984248" data-quiz-question-id="368" disabled="disabled" checked="checked">
  <label for="368-1505143984248"><p>4 bytes</p>
</label>
</li>

                <li class="">

  <input type="radio" name="368" id="368-1505143980763" value="1505143980763" data-quiz-answer-id="1505143980763" data-quiz-question-id="368" disabled="disabled">
  <label for="368-1505143980763"><p>2 bytes</p>
</label>
</li>

                <li class="">

  <input type="radio" name="368" id="368-1505143987563" value="1505143987563" data-quiz-answer-id="1505143987563" data-quiz-question-id="368" disabled="disabled">
  <label for="368-1505143987563"><p>8 bytes</p>
</label>
</li>

                <li class="">

  <input type="radio" name="368" id="368-1505143976024" value="1505143976024" data-quiz-answer-id="1505143976024" data-quiz-question-id="368" disabled="disabled">
  <label for="368-1505143976024"><p>1 byte</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question374" data-position="6">
            <div class=" clearfix" id="quiz_question-374">

    <h4 class="quiz_question">
        
        Question #2
    </h4>

    <!-- Quiz question Body -->
    <p>Which of the following are valid <code>while</code> or <code>do/while</code> statements in ANSI C and Betty-compliant? (Considering <code>a</code> and <code>b</code> two variables of type <code>int</code>)</p>

<p>Please select all correct answers</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="374">
                <li class="">

  <input type="checkbox" name="374" id="374-1505207393326" value="1505207393326" data-quiz-answer-id="1505207393326" data-quiz-question-id="374" disabled="disabled" checked="checked">
  <label for="374-1505207393326"><pre><code>a = 0;
do {
    printf("%d\n", a);
    a++;
} while (a &lt; b);
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="374" id="374-1505207464113" value="1505207464113" data-quiz-answer-id="1505207464113" data-quiz-question-id="374" disabled="disabled">
  <label for="374-1505207464113"><pre><code>a = 0;
while (a &lt; b)
(
    printf("%d\n", a);
    a++;
)
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="374" id="374-1505207443831" value="1505207443831" data-quiz-answer-id="1505207443831" data-quiz-question-id="374" disabled="disabled" checked="checked">
  <label for="374-1505207443831"><pre><code>a = 0;
while (a &lt; b)
    printf("%d\n", a++);
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="374" id="374-1505207374138" value="1505207374138" data-quiz-answer-id="1505207374138" data-quiz-question-id="374" disabled="disabled" checked="checked">
  <label for="374-1505207374138"><pre><code>a = 0;
while (a &lt; b)
{
    printf("%d\n", a);
    a++;
}
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="374" id="374-1505207480827" value="1505207480827" data-quiz-answer-id="1505207480827" data-quiz-question-id="374" disabled="disabled">
  <label for="374-1505207480827"><pre><code>a = 0;
do while (a &lt; b)
{
    printf("%d\n", a);
    a++;
}
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="374" id="374-1505207361956" value="1505207361956" data-quiz-answer-id="1505207361956" data-quiz-question-id="374" disabled="disabled">
  <label for="374-1505207361956"><pre><code>while (a = 0; a &lt; b; a++)
{
    printf("%d\n", a);
}
</code></pre>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question373" data-position="5">
            <div class=" clearfix" id="quiz_question-373">

    <h4 class="quiz_question">
        
        Question #3
    </h4>

    <!-- Quiz question Body -->
    <p>Which of the following are valid <code>for</code> statements in ANSI C and Betty-compliant? (Considering <code>a</code> and <code>b</code> two variables of type <code>int</code>)</p>

<p>Please select all correct answers</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="373">
                <li class="">

  <input type="checkbox" name="373" id="373-1505144916098" value="1505144916098" data-quiz-answer-id="1505144916098" data-quiz-question-id="373" disabled="disabled">
  <label for="373-1505144916098"><pre><code>a = 0;
for (a &lt; b;;)
{
    printf("%d\n", a++);
}
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="373" id="373-1505144899733" value="1505144899733" data-quiz-answer-id="1505144899733" data-quiz-question-id="373" disabled="disabled">
  <label for="373-1505144899733"><pre><code>for (int a = 0; a &lt; b; a++)
{
    printf("%d\n", a);
}
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="373" id="373-1505144894020" value="1505144894020" data-quiz-answer-id="1505144894020" data-quiz-question-id="373" disabled="disabled" checked="checked">
  <label for="373-1505144894020"><pre><code>for (a = 0; a &lt; b; a++)
    printf("%d\n", a);
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="373" id="373-1505144971399" value="1505144971399" data-quiz-answer-id="1505144971399" data-quiz-question-id="373" disabled="disabled" checked="checked">
  <label for="373-1505144971399"><pre><code>a = 0;
for (; a &lt; b;)
{
    printf("%d\n", a++);
}
</code></pre>
</label>
</li>

                <li class="">

  <input type="checkbox" name="373" id="373-1505144733554" value="1505144733554" data-quiz-answer-id="1505144733554" data-quiz-question-id="373" disabled="disabled" checked="checked">
  <label for="373-1505144733554"><pre><code>for (a = 0; a &lt; b; a++)
{
    printf("%d\n", a);
}
</code></pre>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question369" data-position="2">
            <div class=" clearfix" id="quiz_question-369">

    <h4 class="quiz_question">
        
        Question #4
    </h4>

    <!-- Quiz question Body -->
    <p>What is the size of the <code>char</code> data type?</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="369">
                <li class="">

  <input type="radio" name="369" id="369-1505144005674" value="1505144005674" data-quiz-answer-id="1505144005674" data-quiz-question-id="369" disabled="disabled">
  <label for="369-1505144005674"><p>4 bytes</p>
</label>
</li>

                <li class="">

  <input type="radio" name="369" id="369-1505144002109" value="1505144002109" data-quiz-answer-id="1505144002109" data-quiz-question-id="369" disabled="disabled">
  <label for="369-1505144002109"><p>2 bytes</p>
</label>
</li>

                <li class="">

  <input type="radio" name="369" id="369-1505144009723" value="1505144009723" data-quiz-answer-id="1505144009723" data-quiz-question-id="369" disabled="disabled">
  <label for="369-1505144009723"><p>8 bytes</p>
</label>
</li>

                <li class="">

  <input type="radio" name="369" id="369-1505143999092" value="1505143999092" data-quiz-answer-id="1505143999092" data-quiz-question-id="369" disabled="disabled" checked="checked">
  <label for="369-1505143999092"><p>1 byte</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question370" data-position="3">
            <div class=" clearfix" id="quiz_question-370">

    <h4 class="quiz_question">
        
        Question #5
    </h4>

    <!-- Quiz question Body -->
    <p>What is the size of the <code>float</code> data type?</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="370">
                <li class="">

  <input type="radio" name="370" id="370-1505144020574" value="1505144020574" data-quiz-answer-id="1505144020574" data-quiz-question-id="370" disabled="disabled" checked="checked">
  <label for="370-1505144020574"><p>4 bytes</p>
</label>
</li>

                <li class="">

  <input type="radio" name="370" id="370-1505144017367" value="1505144017367" data-quiz-answer-id="1505144017367" data-quiz-question-id="370" disabled="disabled">
  <label for="370-1505144017367"><p>2 bytes</p>
</label>
</li>

                <li class="">

  <input type="radio" name="370" id="370-1505144025186" value="1505144025186" data-quiz-answer-id="1505144025186" data-quiz-question-id="370" disabled="disabled">
  <label for="370-1505144025186"><p>8 bytes</p>
</label>
</li>

                <li class="">

  <input type="radio" name="370" id="370-1505144014089" value="1505144014089" data-quiz-answer-id="1505144014089" data-quiz-question-id="370" disabled="disabled">
  <label for="370-1505144014089"><p>1 byte</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>

      </section>
    </div>
  </div>


        
          <h2 class="gap">Tasks</h2>

    <div data-role="task831" data-position="1" id="task-num-0">
      <div class="panel panel-default task-card " id="task-831">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. Positive anything is better than negative nothing
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="831" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print whether the number stored in the variable <code>n</code> is positive or negative.</p>

<ul>
<li>You can find the source code <a href="https://intranet.alxswe.com/rltoken/rrqNDWjrCWdARnWFLPExPw" title="here" target="_blank">here</a></li>
<li>The variable <code>n</code> will store a different value every time you will run this program</li>
<li>You don’t have to understand what <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code> do. Please do not touch this code</li>
<li>The output of the program should be:

<ul>
<li>The number, followed by

<ul>
<li>if the number is greater than 0: <code>is positive</code></li>
<li>if the number is 0: <code>is zero</code></li>
<li>if the number is less than 0: <code>is negative</code></li>
</ul></li>
<li>followed by a new line</li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>0-positive_or_negative.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="831">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="831" data-batch-id="9" data-toggle="modal" data-target="#task-831-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-831-users-done-modal" data-task-id="831" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "0. Positive anything is better than negative nothing"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-831-modal-button" data-task-id="831" data-toggle="modal" data-target="#task-test-correction-831-correction-modal" id="task-num-0-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:831}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-831-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "0. Positive anything is better than negative nothing"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="831">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="831">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="831">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:831}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="831" data-toggle="modal" data-target="#task-qa-review-831-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:831}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-831-modal" data-correction-id="772617" data-task-id="831">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">0. Positive anything is better than negative nothing</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task832" data-position="2" id="task-num-1">
      <div class="panel panel-default task-card " id="task-832">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      1. The last digit
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="832" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable <code>n</code>.</p>

<ul>
<li>You can find the source code <a href="https://intranet.alxswe.com/rltoken/5HWhPDsq3jq1yCRQFrLl4Q" title="here" target="_blank">here</a></li>
<li>The variable <code>n</code> will store a different value every time you run this program</li>
<li>You don’t have to understand what <code>rand</code>, <code>srand</code>, and <code>RAND_MAX</code> do. Please do not touch this code</li>
<li>The output of the program should be:

<ul>
<li>The string <code>Last digit of</code>, followed by</li>
<li><code>n</code>, followed by</li>
<li>the string <code>is</code>, followed by

<ul>
<li>if the last digit of <code>n</code> is greater than 5: the string <code>and is greater than 5</code></li>
<li>if the last digit of <code>n</code> is 0: the string <code>and is 0</code></li>
<li>if the last digit of <code>n</code> is less than 6 and not 0: the string <code>and is less than 6 and not 0</code></li>
</ul></li>
<li>followed by a new line</li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>1-last_digit.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="832">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="832" data-batch-id="9" data-toggle="modal" data-target="#task-832-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-832-users-done-modal" data-task-id="832" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "1. The last digit"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-832-modal-button" data-task-id="832" data-toggle="modal" data-target="#task-test-correction-832-correction-modal" id="task-num-1-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:832}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-832-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "1. The last digit"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="832">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="832">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="832">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:832}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="832" data-toggle="modal" data-target="#task-qa-review-832-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:832}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-832-modal" data-correction-id="772617" data-task-id="832">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">1. The last digit</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task833" data-position="3" id="task-num-2">
      <div class="panel panel-default task-card " id="task-833">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="833" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints the alphabet in lowercase, followed by a new line.</p>

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>2-print_alphabet.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="833">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="833" data-batch-id="9" data-toggle="modal" data-target="#task-833-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-833-users-done-modal" data-task-id="833" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-833-modal-button" data-task-id="833" data-toggle="modal" data-target="#task-test-correction-833-correction-modal" id="task-num-2-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:833}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-833-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="833">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="833">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="833">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:833}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="833" data-toggle="modal" data-target="#task-qa-review-833-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:833}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-833-modal" data-correction-id="772617" data-task-id="833">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task845" data-position="4" id="task-num-3">
      <div class="panel panel-default task-card " id="task-845">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      3. alphABET
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="845" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.</p>

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> three times in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>3-print_alphabets.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="845">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="845" data-batch-id="9" data-toggle="modal" data-target="#task-845-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-845-users-done-modal" data-task-id="845" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "3. alphABET"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-845-modal-button" data-task-id="845" data-toggle="modal" data-target="#task-test-correction-845-correction-modal" id="task-num-3-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:845}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-845-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "3. alphABET"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="845">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="845">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="845">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:845}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="845" data-toggle="modal" data-target="#task-qa-review-845-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:845}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-845-modal" data-correction-id="772617" data-task-id="845">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">3. alphABET</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task835" data-position="5" id="task-num-4">
      <div class="panel panel-default task-card " id="task-835">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      4. When I was having that alphabet soup, I never thought that it would pay off
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="835" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints the alphabet in lowercase, followed by a new line.</p>

<ul>
<li>Print all the letters except <code>q</code> and <code>e</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>4-print_alphabt.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="835">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="835" data-batch-id="9" data-toggle="modal" data-target="#task-835-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-835-users-done-modal" data-task-id="835" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "4. When I was having that alphabet soup, I never thought that it would pay off"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-835-modal-button" data-task-id="835" data-toggle="modal" data-target="#task-test-correction-835-correction-modal" id="task-num-4-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:835}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-835-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "4. When I was having that alphabet soup, I never thought that it would pay off"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="835">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="835">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="835">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:835}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="835" data-toggle="modal" data-target="#task-qa-review-835-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:835}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-835-modal" data-correction-id="772617" data-task-id="835">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">4. When I was having that alphabet soup, I never thought that it would pay off</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task836" data-position="6" id="task-num-5">
      <div class="panel panel-default task-card " id="task-836">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      5. Numbers
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="836" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p>

<ul>
<li>All your code should be in the <code>main</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>5-print_numbers.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="836">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="836" data-batch-id="9" data-toggle="modal" data-target="#task-836-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-836-users-done-modal" data-task-id="836" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "5. Numbers"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-836-modal-button" data-task-id="836" data-toggle="modal" data-target="#task-test-correction-836-correction-modal" id="task-num-5-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:836}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-836-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "5. Numbers"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="836">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="836">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="836">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:836}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="836" data-toggle="modal" data-target="#task-qa-review-836-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:836}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-836-modal" data-correction-id="772617" data-task-id="836">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">5. Numbers</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task837" data-position="7" id="task-num-6">
      <div class="panel panel-default task-card " id="task-837">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      6. Numberz
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="837" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p>

<ul>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>You can only use <code>putchar</code> twice in your code</li>
<li>All your code should be in the <code>main</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>6-print_numberz.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="837">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="837" data-batch-id="9" data-toggle="modal" data-target="#task-837-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-837-users-done-modal" data-task-id="837" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "6. Numberz"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-837-modal-button" data-task-id="837" data-toggle="modal" data-target="#task-test-correction-837-correction-modal" id="task-num-6-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:837}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-837-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "6. Numberz"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="837">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="837">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="837">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:837}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="837" data-toggle="modal" data-target="#task-qa-review-837-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:837}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-837-modal" data-correction-id="772617" data-task-id="837">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">6. Numberz</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task838" data-position="8" id="task-num-7">
      <div class="panel panel-default task-card " id="task-838">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      7. Smile in the mirror
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="838" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints the lowercase alphabet in reverse, followed by a new line.</p>

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> twice in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>7-print_tebahpla.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="838">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="838" data-batch-id="9" data-toggle="modal" data-target="#task-838-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-838-users-done-modal" data-task-id="838" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "7. Smile in the mirror"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-838-modal-button" data-task-id="838" data-toggle="modal" data-target="#task-test-correction-838-correction-modal" id="task-num-7-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:838}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-838-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "7. Smile in the mirror"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="838">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="838">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="838">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:838}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="838" data-toggle="modal" data-target="#task-qa-review-838-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:838}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-838-modal" data-correction-id="772617" data-task-id="838">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">7. Smile in the mirror</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task839" data-position="9" id="task-num-8">
      <div class="panel panel-default task-card " id="task-839">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      8. Hexadecimal
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="839" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.</p>

<ul>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> three times in your code</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>8-print_base16.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="839">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="839" data-batch-id="9" data-toggle="modal" data-target="#task-839-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-839-users-done-modal" data-task-id="839" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "8. Hexadecimal"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-839-modal-button" data-task-id="839" data-toggle="modal" data-target="#task-test-correction-839-correction-modal" id="task-num-8-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:839}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-839-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "8. Hexadecimal"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="839">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="839">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="839">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:839}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="839" data-toggle="modal" data-target="#task-qa-review-839-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:839}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-839-modal" data-correction-id="772617" data-task-id="839">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">8. Hexadecimal</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task840" data-position="10" id="task-num-9">
      <div class="panel panel-default task-card " id="task-840">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      9. Patience, persistence and perspiration make an unbeatable combination for success
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="840" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints all possible combinations of single-digit numbers.</p>

<ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>Numbers should be printed in ascending order</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>All your code should be in the <code>main</code> function</li>
<li>You can only use <code>putchar</code> four times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>9-print_comb.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="840">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="840" data-batch-id="9" data-toggle="modal" data-target="#task-840-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-840-users-done-modal" data-task-id="840" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "9. Patience, persistence and perspiration make an unbeatable combination for success"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-840-modal-button" data-task-id="840" data-toggle="modal" data-target="#task-test-correction-840-correction-modal" id="task-num-9-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:840}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-840-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "9. Patience, persistence and perspiration make an unbeatable combination for success"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="840">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="840">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="840">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:840}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="840" data-toggle="modal" data-target="#task-qa-review-840-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:840}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-840-modal" data-correction-id="772617" data-task-id="840">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">9. Patience, persistence and perspiration make an unbeatable combination for success</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task842" data-position="14" id="task-num-10">
      <div class="panel panel-default task-card " id="task-842">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
    </h3>

    <div>
        <span class="label label-info">
          #advanced
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="842" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints all possible different combinations of two digits.</p>

<ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>The two digits must be different</li>
<li><code>01</code> and <code>10</code> are considered the same combination of the two digits <code>0</code> and <code>1</code></li>
<li>Print only the smallest combination of two digits</li>
<li>Numbers should be printed in ascending order, with two digits</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>You can only use <code>putchar</code> five times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>100-print_comb3.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="842">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="842" data-batch-id="9" data-toggle="modal" data-target="#task-842-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-842-users-done-modal" data-task-id="842" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "10. Inventing is a combination of brains and materials. The more brains you use, the less material you need"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-842-modal-button" data-task-id="842" data-toggle="modal" data-target="#task-test-correction-842-correction-modal" id="task-num-10-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:842}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-842-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "10. Inventing is a combination of brains and materials. The more brains you use, the less material you need"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="842">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="842">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="842">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:842}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="842" data-toggle="modal" data-target="#task-qa-review-842-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:842}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-842-modal" data-correction-id="772617" data-task-id="842">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">10. Inventing is a combination of brains and materials. The more brains you use, the less material you need</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task843" data-position="15" id="task-num-11">
      <div class="panel panel-default task-card " id="task-843">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      11. The success combination in business is: Do what you do better... and: do more of what you do...
    </h3>

    <div>
        <span class="label label-info">
          #advanced
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="843" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 100.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">100.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints all possible different combinations of three digits.</p>

<ul>
<li>Numbers must be separated by <code>,</code>, followed by a space</li>
<li>The three digits must be different</li>
<li><code>012</code>, <code>120</code>, <code>102</code>, <code>021</code>, <code>201</code>, <code>210</code> are considered the same combination of the three digits <code>0</code>, <code>1</code> and <code>2</code></li>
<li>Print only the smallest combination of three digits</li>
<li>Numbers should be printed in ascending order, with three digits</li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>You can only use <code>putchar</code> six times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
julien@ubuntu:~/0x01$ ./101-print_comb4
012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
julien@ubuntu:~/0x01$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>101-print_comb4.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="843">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="843" data-batch-id="9" data-toggle="modal" data-target="#task-843-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-843-users-done-modal" data-task-id="843" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "11. The success combination in business is: Do what you do better... and: do more of what you do..."</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-843-modal-button" data-task-id="843" data-toggle="modal" data-target="#task-test-correction-843-correction-modal" id="task-num-11-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:843}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-843-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "11. The success combination in business is: Do what you do better... and: do more of what you do..."</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="843">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="843">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="843">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:843}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="843" data-toggle="modal" data-target="#task-qa-review-843-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:843}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-843-modal" data-correction-id="772617" data-task-id="843">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">11. The success combination in business is: Do what you do better... and: do more of what you do...</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task844" data-position="16" id="task-num-12">
      <div class="panel panel-default task-card " id="task-844">
  <span id="user_id" data-id="14407"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      12. Software is eating the World
    </h3>

    <div>
        <span class="label label-info">
          #advanced
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="14407"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar" data-task-id="844" data-correction-id="772617">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 85.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">85.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a program that prints all possible combinations of two two-digit numbers.</p>

<ul>
<li>The numbers should range from <code>0</code> to <code>99</code></li>
<li>The two numbers should be separated by a space</li>
<li>All numbers should be printed with two digits. <code>1</code> should be printed as <code>01</code></li>
<li>The combination of numbers must be separated by comma, followed by a space</li>
<li>The combinations of numbers should be printed in ascending order</li>
<li><code>00 01</code> and <code>01 00</code> are considered as the same combination of the numbers <code>0</code> and <code>1</code></li>
<li>You can only use the <code>putchar</code> function (every other function (<code>printf</code>, <code>puts</code>, etc…) is forbidden)</li>
<li>You can only use <code>putchar</code> eight times maximum in your code</li>
<li>You are not allowed to use any variable of type <code>char</code></li>
<li>All your code should be in the <code>main</code> function</li>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x01-variables_if_else_while</code></li>
            <li>File: <code>102-print_comb5.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm yes" data-task-id="844">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="844" data-batch-id="9" data-toggle="modal" data-target="#task-844-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-844-users-done-modal" data-task-id="844" data-batch-id="9">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
            <h4 class="modal-title">Students who are done with "12. Software is eating the World"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm check-your-task-844-modal-button" data-task-id="844" data-toggle="modal" data-target="#task-test-correction-844-correction-modal" id="task-num-12-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:844}">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-844-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">Correction of "12. Software is eating the World"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="844">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>
                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="844">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="844">
        <div class="check-line">
            <div class="check-inline requirement success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div>
    </div>
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:844}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

      <button class="btn btn-default btn-sm" data-task-id="844" data-toggle="modal" data-target="#task-qa-review-844-modal" data-gtm-custom-event-name="task_qa_review_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:844}">
        QA Review
      </button>
      <div class="modal fade task_get_qa_review" id="task-qa-review-844-modal" data-correction-id="772617" data-task-id="844">
    <div class="modal-dialog modal-lg">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title">12. Software is eating the World</h4>
            </div>
            <div class="modal-body">
                <div class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div class="review-container">
                    <div class="review-corrector"></div>
                    <div class="review-github well" style="display:none">
                        <h5>Commit used:</h5>
                        <ul>
                            <li style="display:none"><strong>User:</strong> <code class="review-github-id"></code> <span class="review-github-name">---</span></li>
                            <li style="display:none"><strong>URL:</strong> <a class="review-github-url" target="_blank">Click here</a></li>
                            <li style="display:none"><strong>ID:</strong> <code class="review-github-commit_id">---</code></li>
                            <li style="display:none"><strong>Author:</strong> <span class="review-github-committer_username">---</span></li>
                            <li style="display:none"><strong>Subject:</strong> <em class="review-github-subject">---</em></li>
                            <li style="display:none"><strong>Date:</strong> <span class="review-github-datetime">---</span></li>
                        </ul>
                    </div>
                    <div class="review-percentage_down"></div>
                    <ul class="review-checks list-group sm-gap"></ul>
                    <div class="review-comment"></div>
                </div>
            </div>
        </div>
    </div>
</div>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>





          <div class="modal fade" id="container-specs-modal"><div class="modal-dialog modal-lg"><div class="modal-content"><div class="modal-header"><button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button><h4 class="modal-title">Recommended Sandbox</h4></div><div class="modal-body"><div data-react-class="user_containers/ContainerSpecs" data-react-props="{&quot;containerModelName&quot;:&quot;Sandbox&quot;,&quot;containerSpecs&quot;:[{&quot;description&quot;:&quot;\u003cp\u003eBasic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations\u003c/p\u003e\n&quot;,&quot;id&quot;:39,&quot;name&quot;:&quot;Ubuntu 20.04&quot;,&quot;online&quot;:true,&quot;container&quot;:{&quot;container_id&quot;:null,&quot;id&quot;:253881,&quot;restart_uri&quot;:&quot;/user_containers/253881/restart.json&quot;,&quot;status&quot;:&quot;asleep&quot;,&quot;uri&quot;:&quot;/user_containers/253881.json&quot;,&quot;wake_uri&quot;:&quot;/user_containers/253881/wake.json&quot;,&quot;webterm_uri&quot;:&quot;/user_containers/253881/webterm&quot;,&quot;host&quot;:null,&quot;password&quot;:&quot;9841d31b5e1643be1111&quot;,&quot;ports&quot;:{&quot;8080&quot;:32988,&quot;3000&quot;:32994,&quot;3306&quot;:32993,&quot;5001&quot;:32990,&quot;80&quot;:32996,&quot;8000&quot;:32989,&quot;22&quot;:32997,&quot;4000&quot;:32992,&quot;443&quot;:32995,&quot;5000&quot;:32991}}}],&quot;containersLimit&quot;:2,&quot;csrfToken&quot;:&quot;mEPRzFmT51y2wv_YM2NlIj-kkmE1rbBD9z0J6hPTUq9ASbJvTwhukWYj-LaoXMpUXAcORokabKWim-icrV-QFg&quot;,&quot;startStatusURI&quot;:&quot;/user_containers/start_status.json&quot;,&quot;startURI&quot;:&quot;/user_containers/start.json&quot;}" data-react-cache-id="user_containers/ContainerSpecs-0"><div><div class="d-flex gap-4 sandboxes-filters"><a class="btn btn-outline-primary"><i aria-hidden="true" class="fa fa-filter"></i><span class="ml-2">Running only</span></a><div class="align-items-center d-flex" style="position: relative; width: 100%;"><input class="form-control" placeholder="Search for an image ..." type="search" value=""></div></div><div class="mt-3"><h3>1 image<small class="ml-2">(1/2 Sandboxes spawned)</small></h3></div><div class="mt-3"><div class="panel panel-default"><div class="panel-body border-left-info" style="border-left: 6px solid;"><div class="align-items-center d-flex flex-wrap justify-content-between"><div><h3 class="mt-0"><i aria-hidden="true" class="fa fa-terminal text-info"></i><span class="ml-2">Ubuntu 20.04</span><span class="fs-4 label label-info ml-2">Asleep</span></h3><div class="mt-2 text-muted"><p>Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations</p>
</div></div><div class="d-flex flex-wrap gap-5"><a class="btn btn-success"><i aria-hidden="true" class="fa fa-play"></i><span class="ml-2">Wake</span></a><a class="btn btn-danger"><i aria-hidden="true" class="fa fa-trash"></i><span class="ml-2">Destroy</span></a></div></div></div></div></div></div></div></div></div></div></div>

  </div>
</div>


      </article>

      <div class="copyright">Copyright © 2023 ALX, All rights reserved.</div>

    </main>

        <button class="btn btn-primary" id="search-button" data-search-active="false" data-toggle="modal" data-target="#search-modal">
  <i aria-hidden="true" class="fa fa-search "></i>
  <i aria-hidden="true" class="fa fa-window-minimize "></i>
</button>

        <div class="modal fade" id="search-modal" tabindex="-1" role="dialog" aria-labelledby="search-modal-label">
    <div class="modal-dialog modal-md">
        <div class="modal-content">
            <div class="modal-header">
                <div id="search-bar-container">
    <input id="search-bar" type="text" name="hbtn-search-bar" placeholder="✨Start search by typing in this field✨">
</div>

            </div>
            <div class="modal-body">
                <div id="modal-spinner" class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div id="search-results-container">
</div>

            </div>
        </div>
    </div>
</div>



        <div class="modal fade" id="markdownGuideModal" tabindex="-1" role="dialog" aria-labelledby="markdownGuideModalLabel" aria-hidden="true">
  <div class="modal-dialog modal-md">
    <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
          <h4 class="modal-title">Markdown Guide</h4>
        </div>
        <div class="modal-body">
            <h4>Emphasis</h4>
<pre>**<strong>bold</strong>**
*<em>italics</em>*
~~<strike>strikethrough</strike>~~</pre>
<h4>Headers</h4>
<pre># Big header
## Medium header
### Small header
#### Tiny header</pre>
<h4>Lists</h4>
<pre>* Generic list item
* Generic list item
* Generic list item

1. Numbered list item
2. Numbered list item
3. Numbered list item</pre>
<h4>Links</h4>
<pre>[Text to display](http://www.example.com)</pre>
<h4>Quotes</h4>
<pre>&gt; This is a quote.
&gt; It can span multiple lines!</pre>
<h4>Images</h4>
<p>CSS style available: <code>width, height, opacity</code></p>
<pre>![](http://www.example.com/image.jpg)
![](http://www.example.com/image.jpg | width: 200px)
![](http://www.example.com/image.jpg | height: 124px | width: 80px | opacity: 0.6)
</pre>
<h4>Tables</h4>
<pre>| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John     | Doe      | Male     |
| Mary     | Smith    | Female   |

<em>Or without aligning the columns...</em>

| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John | Doe | Male |
| Mary | Smith | Female |
</pre>
<h4>Displaying code</h4>
<pre>`var example = "hello!";`

<em>Or spanning multiple lines...</em>

```
var example = "hello!";
alert(example);
```</pre>
        </div>
    </div>
  </div>
</div>


  

<div id="loom-companion-mv3" ext-id="liecbddmkiiihnedobmlmillhodjkdmb"><section id="shadow-host-companion"></section></div></body><grammarly-desktop-integration data-grammarly-shadow-root="true"></grammarly-desktop-integration></html>