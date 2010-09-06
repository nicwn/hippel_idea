====================================================================== CONTENTS
TODO
SUMMARY
OPEN HIPPEL PLATFORM
* ABOUT
* GOALS
HIPPEL IDEA FEATURE
* ABOUT
* GOALS
HIPPEL IDEA HELP
* INSTALL
* SETUP
* CUSTOMIZE
* UNINSTALL
* MORE HELP
APPENDIX
* CONTRIBUTING
* FILES
* STRUCTURE
* DEPENDENCIES

========================================================================== TODO
----------------------------------------------------------- Hippel Idea feature
- Check the installation of the Hippel Idea feature.
  * Add taxonomy terms for the idea tag vocabulary to the feature.
  * Add taxonomy terms for the comment type vocabulary to the feature.
  * Strongarm? "idea" found on author pane admin page.
  * Strongarm? "star" flag found on flags admin page.
  * Strongarm? comment "flag" fond on flags admin page.
- Review menu/path structure.
- Check dependencies.
- Code review and other housecleaning.
- Write unit tests.
- Possibly change the content type name to hippel-idea to allow
  string overrides to be used to quickly change the name globally.
- Review the approaches taken to the components of the page and look for ways
  to generalize each component.

--------------------------------------- Hippel Idea node/add and node/edit page
- Theme the node/add page (e.g., the help text, the imagefield fieldset,
  the tags, the buttons).
- Write documentation for customizing the theme of the node/add page.
- POSTPONED: Resolve whether or not images need to be nodes.

--------------------------------------------------------- Hippel Idea node page
! Decide on an approach to the active block (views) [see also ideas page].
! Decide on an approach to the "related ideas" block (views).
- Add "what is this?" link to vote results.
- Add flag to comments.
- Add vote widget to comments tagged as suggestions.
- Redirect back to node after submitting a comment.
- Review using ajax for submitting comments and updating the comment view.
- Theme the node page
  * Consider alternate approaches to the image layout on the node page to
    accommodate smaller images.
  * Theme the blocks on the node page (vote, vote results, flag, sharethis,
    comment, etc.).
  * Create templates for the page and for the blocks on the page.
- Write documentation for customizing the theme of the node page.

------------------------------------------------------------- Hippel Ideas page
! Decide on an approach to the active page (views) [see also node page].
- Add banner region to hippelicious theme.
- Add left sidebar region to hippelicious theme.
- Add help block.
- Add submit block.
- Add tags block (views).
- Theme the ideas page.
  * Theme the menu block.
  * Theme the grid and list tabs.
  * Theme the vote result widget for the grid tab.

------------------------------------------------------------------ Landing page
* Add small new ideas block to newest view (views).
* Add small popular ideas block to active view (views).

--------------------------------------------------------------------- User page
* Add user ideas block (views).
* Add starred ideas block (views).


======================================================================= SUMMARY
The Hippel Idea feature implements the idea content type and related components
for the Open Hippel (OH) open innovation platform.
- Wireframes for the idea node/add page can be found at
  http://www.sireneast.com/vault/openhippel/draft_wireframes_v1.01/Create_Product_Idea.html
- Wireframes for the idea node page can be found at
  http://www.sireneast.com/vault/openhippel/draft_wireframes_v1.01/Product_Detail.html


========================================================== OPEN HIPPEL PLATFORM
************************************************************************* ABOUT
Open Hippel is an open source open innovation platform built on the open source
PHP framework Drupal.

************************************************************************* GOALS
The goal of the platform is to allow innovators to connect with people who can
execute their ideas, turning those ideas into real products, businesses, and
projects. The team behind Open Hippel hopes to facilitate the development of
"innovation communities", decision-making spaces where groups can identify
needs, collaboratively design solutions, and finance their solutions.


=========================================================== HIPPEL IDEA FEATURE
************************************************************************* ABOUT
The Hippel Idea feature implements the idea content type and related components
for the Open Hippel (OH) open innovation platform.

************************************************************************* GOALS



========================================================================== HELP
*********************************************************************** INSTALL


************************************************************************ SET UP


********************************************************************* CUSTOMIZE


********************************************************************* UNINSTALL


********************************************************************* MORE HELP



====================================================================== APPENDIX
************************************************************************* FILES


********************************************************************* STRUCTURE


****************************************************************** DEPENDENCIES
--------------------------------------------------------------------------- CCK 
- Content (cck)
  http://drupal.org/project/cck
  + Text (cck)
  + Node Reference (cck)
  + Option Widgets (cck)
- Content Taxonomy (content_taxonomy)
  http://drupal.org/project/content_taxonomy
  + Content Taxonomy Options (content_taxonomy)
- Filefield (filefield)
  http://drupal.org/project/filefield
- Image field (imagefield)
  http://drupal.org/project/imagefield

-------------------------------------------------------------- Chaos tool suite
- Chaos tools (ctools)

----------------------------------------------------------------------- Context
- Context (context)
  + Context layouts (context)
  + Context UI (context)

--------------------------------------------------------------- Core - optional
- Comment (drupal)
- Menu (drupal)
- Path (drupal)
- PHP Filter (drupal)
- Taxonomy (drupal)

---------------------------------------------------------------------- Features
- Features (features)

------------------------------------------------------------------------- Flags
- Flag (flag)

----------------------------------------------------------------- Form Elements
- Hierarchical Select (hierarchical_select)
- Hierarchical Select Taxonomy (hierarchical_select)
- Hierarchical Select Content Taxonomy (hierarchical_select)

-------------------------------------------------------------------- ImageCache
- ImageAPI (imageapi)
- ImageAPI GD2 (imageapi)
- ImageCache (imagecache)

------------------------------------------------------------------------- Other
- Author Pane (author_pane)
- Automatic Nodetitles (auto_nodetitle)
- Diff (diff)
- Gravatar integration (gravatar)
- Lightbox2 (lightbox2)
- Pathauto (pathauto)
- ShareThis (sharethis)
- Strongarm (strongarm)
- Token (token)

------------------------------------------------------------------------- Rules
- Rules (rules)
  + Rules Administration UI (rules)

---------------------------------------------------------------- User interface
- jQuery UI (jquery_ui)

------------------------------------------------------------------------- Views
- Views (views)
  + Views UI (views)
- Views attach (views_attach)
- Views Display Tabs (viewsdisplaytabs)

------------------------------------------------------------------------ Voting
- Vote Up/Down (vote_up_down)
- Vote Up/Down Nodes (vote_up_down)
- Voting API (votingapi)
