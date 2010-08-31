SUMMARY
The Hippel Idea feature implements the (product) idea content type for the
Open Hippel (OH) open innovation platform.
- Wireframes for the idea node/add page can be found at
  http://www.sireneast.com/vault/openhippel/draft_wireframes_v1.01/Create_Product_Idea.html.
- Wireframes for the idea node page can be found at
  http://www.sireneast.com/vault/openhippel/draft_wireframes_v1.01/Product_Detail.html.


TODO
* Feature
  - Check the installation of the hippel idea feature.
  - Possibly change the content type name to hippel-idea to allow
    string overrides to be used to quickly change the name globally.

* Idea node/add and node/edit page
  - Resolve whether or not images need to be nodes.
  - Theme the node/add page (e.g., the help text, the imagefield fieldset,
    the tags, the buttons).
  - Write documentation for theming the node/add page.

* Idea node page
  - Decide on an approach to the "progress bar".
  - Decide on an approach to the "related ideas" block (views).
  - Add the comment type select widget form (custom module).
  - Add the comment tabbed view (viewsdisplaytabs).
  - Add the "active ideas" block (views).
  - Theme the node page
    - Theme the image layout on the node page.
    - Theme the blocks on the node page (vote, vote results, flag, and sharethis)
  - Write documentation for theming the node page.

HELP
How to install


How to set up


How to customize


How to uninstall


Where to find more help



DEPENDENCIES
* CCK
  - Content (cck)
    - Option Widgets (cck)
    - Text (cck)
  - Content Taxonomy (content_taxonomy)
  - Filefield (filefield)
  - Image field (imagefield)
* Chaos tool suite
  - Chaos tools (ctools)
* Flags
  - Flag (flag)
* Core - optional
  - Taxonomy (drupal)
* Form Elements
  - Hierarchical Select (hierarchical_select)
  - Hierarchical Select Taxonomy (hierarchical_select)
  - Hierarchical Select Content Taxonomy (hierarchical_select)
* ImageCache
  + ImageAPI (imageapi)
  + ImageCache (imagecache)
* Other
  - Author Pane (author_pane)
  + Automatic Nodetitles (auto_nodetitle)
  - Diff (diff)
  - ShareThis (sharethis)
  - Strongarm (strongarm)
* Views
  + Views (views)
  + Views attach (views_attach)
* Voting
  - Vote Up/Down (vote_up_down)
  - Vote Up/Down Nodes (vote_up_down)
  - Voting API (votingapi)

Note: Modules preceded with a plus sign are not dependencies yet.
