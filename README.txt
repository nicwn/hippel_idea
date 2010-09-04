SUMMARY
The Hippel Idea feature implements the (product) idea content type for the
Open Hippel (OH) open innovation platform.
- Wireframes for the idea node/add page can be found at
  http://www.sireneast.com/vault/openhippel/draft_wireframes_v1.01/Create_Product_Idea.html.
- Wireframes for the idea node page can be found at
  http://www.sireneast.com/vault/openhippel/draft_wireframes_v1.01/Product_Detail.html.


TODO
* Feature
  - Check the installation of the Hippel Idea feature.
  - Possibly change the content type name to hippel-idea to allow
    string overrides to be used to quickly change the name globally.
  - Review the approaches taken to the components of the page and look for ways
    to generalize each component.

* Idea node/add and node/edit page
  - POSTPONED: Resolve whether or not images need to be nodes.
  - Theme the node/add page (e.g., the help text, the imagefield fieldset,
    the tags, the buttons).
  - Write documentation for customizing the theme of the node/add page.

* Idea node page
  - Decide on an approach to the "related ideas" block (views).
  - Add the "active ideas" block (views).
  - Theme the node page
    - Consider alternate approaches to the image layout on the node page to
      accommodate smaller images.
    - Theme the blocks on the node page (vote, vote results, flag, sharethis, comment, etc.).
    - Create templates for the page and for the blocks on the page.
  - Write documentation for customizing the theme of the node page.

HELP
How to install


How to set up


How to customize


How to uninstall


Where to find more help


DEPENDENCIES
* CCK
  - Content (cck)
    - Text (cck)
    - Node Reference (cck)
    - Option Widgets (cck)
  - Content Taxonomy (content_taxonomy)
    - Content Taxonomy Options (content_taxonomy)
  - Filefield (filefield)
  - Image field (imagefield)
* Chaos tool suite
  - Chaos tools (ctools)
* Context
  - Context (context)
    - Context layouts (context)
* Core - optional
  - Comment (drupal)
  - Menu (drupal)
  - Path (drupal)
  - PHP Filter (drupal)
  - Taxonomy (drupal)
* Features
  - Features (features)
* Flags
  - Flag (flag)
* Form Elements
  - Hierarchical Select (hierarchical_select)
  - Hierarchical Select Taxonomy (hierarchical_select)
  - Hierarchical Select Content Taxonomy (hierarchical_select)
* ImageCache
  - ImageAPI (imageapi)
  - ImageAPI GD2 (imageapi)
  - ImageCache (imagecache)
* Other
  - Author Pane (author_pane)
  - Automatic Nodetitles (auto_nodetitle)
  - Diff (diff)
  - Gravatar integration (gravatar)
  - Lightbox2 (lightbox2)
  - Pathauto (pathauto)
  - ShareThis (sharethis)
  - Strongarm (strongarm)
  - Token (token)
* Rules
  - Rules (rules)
* User interface
  - jQuery UI (jquery_ui)
* Views
  - Views (views)
  - Views attach (views_attach)
  - Views Display Tabs (viewsdisplaytabs)
* Voting
  - Vote Up/Down (vote_up_down)
  - Vote Up/Down Nodes (vote_up_down)
  - Voting API (votingapi)
